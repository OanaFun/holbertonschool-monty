#include "monty.h"

/**
 * free_stack - frees a list
 * @head: struct
 */

void free_stack(stackk_t *head)
{
	stackk_t *stack;

	while (head)
	{
		stack = head->next;
		free(head);
		head = stack;
	}
}
