#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root
 *
 * Return: natural square root of n, or -1 if it does not exist
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - helps to find the square root
 * @n: number to check
 * @guess: current guess
 *
 * Return: square root or -1 if not found
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}

	if (guess * guess > n)
	{
		return (-1);
	}

	return (_sqrt_helper(n, guess + 1));
}
