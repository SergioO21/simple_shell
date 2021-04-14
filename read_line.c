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

		if (isatty(STDIN) != 0)
			write(STDOUT, "\n", 1);

		exit(EXIT_SUCCESS);
	}

	return (buffer);
}
