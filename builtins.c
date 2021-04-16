#include "holberton.h"

/**
 * builtins - Default kernel commands.
 *
 * @ar: Entered commands.
 * @exit_value: Exit value.
 * @line: Entered arguments.
 * @_exit: Exit condition.
 *
 * Return: If entered "exit", returns (-1).
 *         Else, always returns (0);
 */

int builtins(char **ar, int exit_value, char *line, char *_exit)
{
	char *builts[2] = {"exit", "env"};
	int i = 0, size_env;
	char *env = NULL;

	/** Exit */
	if (_strcmp(builts[0], ar[0]) == 0 || _strcmp(builts[0], _exit) == 0)
	{
		free(ar);
		free(line);
		exit(exit_value);
	}

	/** env */
	else if (_strcmp(builts[1], ar[0]) == 0)
	{
		for (i = 0; environ[i] != '\0'; i++)
		{
			env = environ[i];
			size_env = _strlen(env);
			write(STDOUT, env, size_env);
			write(STDOUT, "\n", 1);
		}
	}

	return (0);
}
