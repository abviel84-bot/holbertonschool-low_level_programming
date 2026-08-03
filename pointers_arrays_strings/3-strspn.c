#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: characters to accept
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)
	{
		a = accept;

		while (*a && *a != *s)
		{
			a++;
		}

		if (*a == '\0')
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}
