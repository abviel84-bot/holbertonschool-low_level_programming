#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: characters to look for
 *
 * Return: pointer to the first matching byte, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}

			a++;
		}

		s++;
	}

	return (NULL);
}
