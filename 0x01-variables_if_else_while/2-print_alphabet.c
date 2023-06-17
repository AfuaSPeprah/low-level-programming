#include <stdio.h>


/**
 * main - prints alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	char LC;

	for (LC = 'a'; LC <= 'z'; LC++)
	{
		putchar(LC);
	}
	putchar('\n');
	return (0);
}
