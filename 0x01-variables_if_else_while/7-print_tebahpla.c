#include <stdio.h>

/**
 * main -prints the alphabets in a reverse way
 * Return: Always 0
 */
int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
		putchar(za);

	putchar('\n');

	return (0);
}
