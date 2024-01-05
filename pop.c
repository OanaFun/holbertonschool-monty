#include "monty.h"

/**
* pop - Function that remove the top of the stack
* @stack: stack main
* @line_number: line count
*
* Return: void
*/

void pop(stackk_t **stack, unsigned int line_number)
{
	stackk_t *delete = *stack;

	if (!*stack || !stack)
	{
		dprintf(STDERR_FILENO, "L%i: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->next)
	{
		*stack = delete->next;
		(*stack)->prev = NULL;
		free(delete);
	}
	else
	{
		free(*stack);
		*stack = NULL;
	}
}
