#include "monty.h"

/**
 * main - function that print main
 * @argc: int variable
 * @argv: char variable
 * Return: an int
*/

int main (int argc, char **argv)
{
    if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	operate_function(argv[1]);
	return (0);
}
