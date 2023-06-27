#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		last_digit = last_digit * -1;
	}

	_putchar(ld + '0');

	return (0);
}
