#include "main.h"

/**
 * print_sign - prints sign of number
 * @n: specific number input
 * Return: 1 and print + if n is positive, -1 and
 * print - if n is negative and 0 and print 0 when
 * n is 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
