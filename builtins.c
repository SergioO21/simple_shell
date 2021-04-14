#include "holberton.h"

/**
 * builtins - Default kernel commands.
 *
 * @ar: Entered commands.
 *
 * Return: If entered "exit", returns (-1).
 *         Else, always returns (0);
 */

int builtins(char **ar)
{
	char *builts[2] = {"exit", "env"};
	int i = 0, size_env;
	char *he = NULL;

	/** Exit */
	if (_strcmp(ar[0], builts[0]) == 0)
		return (-1);

	/** env */
	else if (_strcmp(ar[0], builts[1]) == 0)
	{
		for (i = 0; *environ[i] != '\0'; i++)
		{
			he = environ[i];
			size_env = _strlen(he);
			write(STDOUT, he, size_env);
			write(STDOUT, "\n", 1);
		}
	}

	return (0);
}
