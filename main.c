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
	int exit_value = 0;

	while (1)
	{
		signal(SIGINT, _signal);

		if (isatty(STDIN))
			write(STDOUT, "$ ", 2);

		line = read_line();
		tokens = tokenize(line);
		exit_value = execute(tokens, exit_value, line);

		free(line);
		free(tokens);
	}

	return (0);
}
