#include "monty.h"

/**
<<<<<<< HEAD
 * push - add a node into the stack
 * @stack: nodes
 * @line_number: file line number
*/

void push(stack_t **stack, unsigned int line_number)
{
	char **split_buff; /* declare a pointer to pointer to char used for splitting*/
	int num; /*variable to store an integer value */
	stack_t *new; /* declare a pointer to a stack node */

	new = malloc(sizeof(stack_t)); /* allocate memory for a new node */
	if (!new) /* check if malloc failed */
	{
		free(new);
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	split_buff = _split(buff, " ");

	num = _atoi(split_buff[1], line_number); /* convert the string at index 1 of 'split_buff' to an integer */
	new->n = num; /* store the integer 'num' in the 'n' field of the new node */
	new->prev = NULL; /* set the 'prev' field of the new node to NULL */
	new->next = *stack; /* set the 'next' field of the new node to the current stack */

	if (*stack)
		(*stack)->prev = new; /*update 'prev' field of the current top node */

	*stack = new; /* update the stack to point to the new node */

	free(split_buff);
}
=======
 * 
 * 
*/

>>>>>>> 3b0fe1a427c746c391a6414e3fb389bc83cec43f
