#include "monty.h"

/**
 * pall - prints all nodes
 * @stack: nodes
 * @line_number: file line number
*/

void pall(stackk_t **stack, unsigned int line_number)
{
	(void)line_number;

	while (*stack)
	{
		printf("%i\n", (*stack)->n);
		stack = &(*stack)->next;
	}
}
