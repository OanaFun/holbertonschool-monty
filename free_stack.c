#include "monty.h"

/**
 * free_stack - frees a list
 * @head: struct
 */

void free_stack(stack_t *head)
{
	stack_t *stack;

	while (head)
	{
		stack = head->next;
		free(head);
		head = stack;
	}
}
