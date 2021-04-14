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

	write(STDERR, command, len);
	write(STDERR, ": not found\n", 12);
}
