#include "holberton.h"

/**
 * main - Runs the shell.
 *
 * Return: Always (0).
 */

int main(void)
{
	char *line = NULL;
	char **tokens = NULL;
	int stats = 0;

	while (stats != EOF)
	{
		signal(SIGINT, _signal);

		if (isatty(STDIN))
			write(STDOUT, "$ ", 2);

		line = read_line();
		tokens = tokenize(line);
		stats = execute(tokens);

		free(line);
		free(tokens);
	}

	if (stats == EOF)
		exit(2);

	return (0);
}
