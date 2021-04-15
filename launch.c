#include "holberton.h"

/**
 * launch - Check if the command entered is in the $PATH.
 *
 * @ar: Entered commands.
 * @exit_value: Exit value.
 *
 * Return: Always (0);
 */

int launch(char **ar, int exit_value)
{
	int is_path_calculated = 0;
	struct stat st;
	char *exa = NULL;

	exa = malloc(sizeof(char *) * _strlen(ar[0]));
	exa = _strcpy(exa, ar[0]);

	if (stat(ar[0], &st) == 0 && exa[0] != '/')
		ar[0] = check_path(ar);

	else if (stat(ar[0], &st) == -1)
		ar[0] = check_path(ar);

	if (_strcmp(exa, ar[0]) != 0)
		is_path_calculated = 1;

	if (stat(ar[0], &st) == 0)
		exit_value = _fork(ar, exit_value);

	else
	{
		_error(ar[0]);
		exit_value = 127;
	}

	if (is_path_calculated == 1)
		free(ar[0]);

	free(exa);

	return (exit_value);
}
