#include "holberton.h"

/**
 * _fork - Create a new process to execute the command entered.
 *
 * @ar: Entered commands.
 */

void _fork(char **ar)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		if (execve(ar[0], ar, NULL) == -1)
			perror("Error: execve");
	}

	else if (pid == -1)
		perror("Error: Fork failure");

	else
		wait(&status);
}
