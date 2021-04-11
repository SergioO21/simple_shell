#include "holberton.h"

/**
 * check_path - Check if the file is in the path.
 *
 * @ar: Entered commands.
 *
 * Return: If it finds the file in the path, returns the full path.
 *         Else, returns the same command entered.
 */

char *check_path(char **ar)
{
	char *value = NULL, *path = NULL;
	char *env = NULL, *name = NULL, *ex = NULL;
	size_t size_name, size;
	struct stat st;

	env = get_env();
	name = ar[0];

	size_name = _strlen(name);
	ex = malloc(sizeof(char) * _strlen(env) + 1);
	ex = _strcpy(ex, env);
	path = strtok(ex, ":");

	while (path != NULL)
	{
		size = _strlen(path) + size_name + 2;
		value = malloc(sizeof(char) * size);

		value = _strcpy(value, path);
		value = _strcat(value, "/");
		value = _strcat(value, name);

		if (stat(value, &st) == 0 && st.st_mode & X_OK)
		{
			free(ex);
			return (value);
		}

		path = strtok(NULL, ":");
		free(value);
	}
	free(ex);
	return (name);
}
