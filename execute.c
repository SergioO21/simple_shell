#include "holberton.h"

/**
 * execute - Check if the command entered is a built in or not.
 *
 * @ar: Entered commands.
 *
 * Return: The function corresponding to the command entered.
 */

int execute(char **ar)
{
	char *builts[2] = {"exit", "env"};

	if (*ar == NULL)
		return (1);

	else if (_strcmp(ar[0], builts[0]) == 0)
		return (builtins(ar));

	else if (_strcmp(ar[0], builts[1]) == 0)
		return (builtins(ar));

	else
		return (launch(ar));
}
