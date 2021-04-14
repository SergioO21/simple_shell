#include "holberton.h"

/**
 * _error - Print the standard error.
 *
 * @command: Entered command.
 */

void _error(char *command)
{
	int len = 0;

	len = _strlen(command);

	write(STDOUT, command, len);
	write(STDOUT, ": No such file or directory\n", 28);
}
