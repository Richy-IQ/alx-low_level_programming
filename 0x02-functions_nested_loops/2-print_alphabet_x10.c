#include <stdio.h>
/**
 * main - entry
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n, co;
	co = 0;
	while (co < 10)
	{
		for (n = 'a' ; n <= 'z'; n++)
		{
			putchar(n);
		}
		co++;
		putchar('\n');
	}
}
