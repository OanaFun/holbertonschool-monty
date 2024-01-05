#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @stack: nodes
 * @line_number: file line number
*/

void pint(stackk_t **stack, unsigned int line_number)
{
	if (!*stack || !stack)
	{
		dprintf(STDERR_FILENO, "L%i: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", (*stack)->n);
}
