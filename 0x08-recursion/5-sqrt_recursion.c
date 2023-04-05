#include "main.h"

/**
 * _sqrt_recursion - hfuehwif find natural square root
 * @n: integer fr
 * @val: square rootfbsjhfe re
 * Return: int djshhf
 */
int square(int n, int val);

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root hdkfvhhd
 * @n: int to find square root dfhkhkv
 * @val: square rootdijoij
 * Return: intfdjhhgvkdf
 */

int square(int n, int val)
{

	if (val * val == n)
		return (val);
	else if (val * val < n)
		return  (square(n, val + 1));
	else
		return (-1);

}
