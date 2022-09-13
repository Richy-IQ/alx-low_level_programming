#include <stdio.h>
/**
 * print_alphabet - print alphabet in lower case
 *
 * Return: Always 0 (sucess)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
