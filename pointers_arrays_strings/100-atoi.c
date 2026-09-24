#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer, or 0 if there are no numbers
 */
int _atoi(char *s)
{
	int i = 0, minus = 0, result = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			minus++;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 - (s[i] - '0');
		i++;
	}
	if (minus % 2 == 0)
		result = -result;
	return (result);
}
