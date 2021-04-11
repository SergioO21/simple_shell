#include "holberton.h"

/**
 * _signal - Checks if a signal has been input.
 *
 * @sig: Input signal value.
 */

void _signal(int sig)
{
	if (sig == SIGINT)
		write(STDOUT, "\nYou can't kill me\n", 19);
}
