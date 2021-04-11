#include "holberton.h"

/**
 * tokenize - Parses the arguments into tokens.
 *
 * @buffer: Entered arguments.
 *
 * Return: Array of tokens.
 */

char **tokenize(char *buffer)
{
	char *token = NULL;
	char **ar = NULL;
	int i = 0, size = 0;

	while (buffer[size] != '\0')
		size++;

	ar = malloc(sizeof(char *) * size);

	i = 0;

	token = strtok(buffer, DELIM);
	ar[i] = token;

	for (i = 1; token != NULL; i++)
	{
		token = strtok(NULL, DELIM);
		ar[i] = token;
	}

	return (ar);
}
