#include "main.h"
/**
 * _islower - a function that check lower case
 * @c:single letter input
 *
 * Return: sucess
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
