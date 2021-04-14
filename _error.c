#include "holberton.h"

/**
 *
 *
 *
 *
 *
 */

void _error(char *command)
{
	int len = 0;

	len = _strlen(command);
	
	write(STDOUT, command, len);
	write(STDOUT, ": No such file or directory\n", 28);
}
