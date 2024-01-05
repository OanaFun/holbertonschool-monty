#include "monty.h"

/**
 * add - adds the top two nodes of the stack
 * @stack: nodes
 * @line_number: file line number
 */

void add(stackk_t **stack, unsigned int line_number)
{
	stackk_t *head = *stack;

	if (!*stack || !stack || !head->next)
	{
		dprintf(STDERR_FILENO, "L%i: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* result in node 2 */
	(head->next)->n += head->n;

	/* remove node 1 */
	pop(&head, line_number);

	/* update stack */
	*stack = head;
}
