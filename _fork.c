#include "holberton.h"

/**
 * _fork - Create a new process to execute the command entered.
 *
 * @ar: Entered commands.
 * @exit_value: Exit value.
 *
 * Return: Exit value.
 */

int _fork(char **ar, int exit_value)
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
	{
		wait(&status);

		if (WIFEXITED(status))
			exit_value = WEXITSTATUS(status);
	}

	return (exit_value);
}
