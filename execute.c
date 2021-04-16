#include "holberton.h"

/**
 * execute - Check if the command entered is a built in or not.
 *
 * @ar: Entered commands.
 * @exit_value: Exit value.
 * @line: Entered arguments.
 *
 * Return: The function corresponding to the command entered.
 */

int execute(char **ar, int exit_value, char *line)
{
	char *builts[2] = {"exit", "env"};

	if (*ar == NULL)
		return (1);

	else if (_strcmp(builts[0], ar[0]) == 0)
		return (builtins(ar, exit_value, line, NULL));

	else if (_strcmp(builts[1], ar[0]) == 0)
		return (builtins(ar, exit_value, line, NULL));

	else
		return (launch(ar, exit_value));
}
