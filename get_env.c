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
		if (_strncmp("PATH", env[i], 4) == 0)
			ret = env[i];
	}

	if (ret != NULL)
	{
		for (i = 0; ret[i] != '='; i++)
			ret++;

		ret++;
	}

	return (ret);
}
