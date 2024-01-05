#include "monty.h"

/**
 * swap - swap the top two nodes of the stack
 * @stack: nodes
 * @line_number: file line number
*/

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	stack_t *temp = *stack;

	if (!*stack || !stack || !head->next)
	{
		dprintf(STDERR_FILENO, "L%i: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	head = head->next; /*move head to the next node */
	head->prev = NULL; /* set the previous head to NULL */

	temp->next = head->next; /*update next to the original head */
	head->next = temp; /* swap the nodes */
	(head->next)->prev = head; /*update previous to the new top node */

	*stack = head;
}
