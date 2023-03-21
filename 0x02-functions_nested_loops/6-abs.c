#include "main.h"

/**
 * _abs - computes the absolute value
 * @abs: integer input
 * Return: absolute value
 */
int _abs(int abs)
{
	return (abs * ((abs > 0) - (abs < 0)));
}
