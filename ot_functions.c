#include "monty.h"

/**
 * _atoi - function that convert a string to an integer
 *@str: input string
 *@line_number: file
 * Return: value of resultat
*/

int _atoi(char *str, unsigned int line_number)
{
    int num = 0;
    int i = 0;
    unsigned int valid_nums = 0;

    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] - '0');
        valid_nums++;
        i++;
    }
    if (valid_nums != strlen(str) - 1)
    {
        dprintf(STDERR_FILENO, "L%i: usage: push integrer\n", line_number);
        exit(EXIT_FAILURE);
    }
    return (num);
}

/**
 * _split - split string
 * @str: string
 * @sep: separator
 * Return: divided str
 */

char **_split(char *str, char *sep)
{
	char *aux, **split_str;
	int i = 0;

	aux = strtok(str, sep);
	split_str = (char **)_calloc(100, sizeof(char *));

	if (!split_str)
	{
		free(split_str);
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	while (aux)
	{
		split_str[i] = aux;
		aux = strtok(NULL, sep);
		i++;
	}
	return (split_str);
}
