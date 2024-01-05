#include "monty.h"

/**
 * operate_function - function that handle all function
 * @file: variable char
*/

void operate_function(char *file)
{
	FILE *fd;
	size_t read_size = 0;
	void (*opcode_func)(stackk_t **, unsigned int);
	int line_number = 1;
	stackk_t *head;

	fd = fopen(file, "r+");
	if (!fd)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	head = NULL;

	while (getline(&buff, &read_size, fd) != -1)
	{
		opcode_func = check_opcodes();
		if (opcode_func == NULL)
		{
			dprintf(STDERR_FILENO, "L%i: unknown instruction %s", line_number, buff);
			exit(EXIT_FAILURE);
		}
		opcode_func(&head, line_number);
		line_number++;
	}
	free(buff);
	free_stack(head);
	fclose(fd);
}
