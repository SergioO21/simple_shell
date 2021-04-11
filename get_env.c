#include "holberton.h"

/**
 * get_env - Getting the $PATH.
 *
 * Return: The $PATH.
 */

char *get_env(void)
{
	int i;
	char **env = NULL, *ret = NULL;

	env = environ;

	for (i = 0; env[i] != NULL; i++)
	{
		if (_strncmp("PATH=", env[i], 5) == 0)
			ret = env[i];
	}

	for (i = 0; i < 5; i++)
		ret++;

	return (ret);
}
