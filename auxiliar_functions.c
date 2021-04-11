#include "holberton.h"

/**
 * _strncmp - Function to compare strings.
 *
 * @s1: First string to compare.
 * @s2: Second string to compare.
 * @len: Length of string to compare.
 *
 * Return: If success, returns (0).
 *         Else, returns (-1).
 */

int _strncmp(char *s1, char *s2, int len)
{
	for (; *s1 && *s2 && len >= 0; len--)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}

		else
			return (-1);
	}

	return (0);
}

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: Destiny.
 * @src: Source.
 *
 * Return: Always (0).
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++, ++i)
		dest[i] = src[j];

	dest[i] = '\0';

	return (dest);
}

/**
 * _strcmp - Compares two strings.
 *
 * @s1: Destiny.
 * @s2: Source.
 *
 * Return: Always (0).
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}

/**
 * _strcpy - Copies the string.
 *
 * @dest: Destiny.
 * @src: Source.
 *
 * Return: Always (0).
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - Counts string chars.
 *
 * @s: Variable to validate.
 *
 * Return: Number of chars.
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}
