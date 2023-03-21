#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @jay: last digit
 * Return: value of last digit
 */
int print_last_digit(int jay)
{
	int xyz;

	xyz = (jay % 10);

	if (xyz < 0)
	{
		xyz = (-1 * xyz);
	}
	_putchar(xyz + '0');
	return (xyz);
}
