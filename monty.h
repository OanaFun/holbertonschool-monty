#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

char *buff;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stackk_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instruction_s
{
        char *opcode;
        void (*f)(stackk_t **stack, unsigned int line_number);
} instruction_t;

void operate_function(char *file);
void (*check_opcodes(void))(stackk_t **, unsigned int);

void *_calloc(unsigned int nmemb, unsigned int size);
char **_split(char *str, char *sep);
int _atoi(char *str, unsigned int line_number);
void free_stack(stackk_t *head);

void push(stackk_t **stack, unsigned int line_number);
void pop(stackk_t **stack, unsigned int line_number);
void swap(stackk_t **stack, unsigned int line_number);
void add(stackk_t **stack, unsigned int line_number);

void pall(stackk_t **stack, unsigned int line_number);
void pint(stackk_t **stack, unsigned int line_number);
void nop(stackk_t **stack, unsigned int line_number);
#endif
