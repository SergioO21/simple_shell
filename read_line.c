#include "holberton.h"

/**
 * read_line - Read the entered arguments.
 *
 * Return: Entered arguments.
 */

char *read_line(void)
{
	char *buffer = NULL;
	size_t buffsize = 0;
	int line = 0;

	line = getline(&buffer, &buffsize, stdin);

	if (line == EOF)
	{
		free(buffer);
		exit(EXIT_FAILURE);
	}

	return (buffer);
}
