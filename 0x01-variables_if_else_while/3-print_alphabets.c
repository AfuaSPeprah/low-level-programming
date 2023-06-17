#include <stdio.h>

/**
 * main - prints alpahbet in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
		putchar(az);

	for (az = 'A'; az <= 'Z'; az++)
		putchar(az);

	putchar('\n');

	return (0);
}
