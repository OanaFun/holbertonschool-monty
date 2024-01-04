#include "monty.h"

/**
* pop - Function that remove the top of the stack
* @stack: stack main
* @line_number: line count
*
* Return: void
*/

void pop(stack_t **stack, unsigned int line_number){

    stack_t *tmp = NULL;

    if (stack == NULL || *stack == NULL){

        printf(stderr, "L%u: can't stop pop an empty stack\n", line_number);
        status = EXIT_FAILURE;
        return;
    }
    tmp = (*stack)->next;
    free(*stack);
    *stack = tmp;

    if (*stack == NULL){
        return;
    }
    (*stack)->prev = NULL;
}
