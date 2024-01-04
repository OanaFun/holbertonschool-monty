#include "monty.h"

/**
* pop - Function that remove the top of the stack
* @stack: stack main
* @line_cnt: line count
*
* Return: void
*/

void pop(stack_t **stack, unsigned int line_cnt){

    stack_t *tmp = NULL;

    if (!stack || !*stack){

        printf(stderr, "L%u: can't stop pop an empty stack\n", line_cnt);
        status = EXIT_FAILURE;
        return;
    }
    tmp = (*stack)->next;
    free(*stack);
    *stack = tmp;

    if (!!*stack){
        return;
    }
    (*stack)->prev = NULL;
}
