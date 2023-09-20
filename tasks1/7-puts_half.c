#include "main.h"
/**
 * puts_half - printing the last half of the digits
 * Return: always 0
 */
void puts_half(char *str)
{
	int i, n;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	n = (length - 1) / 2; /*this is prints the last two digits*/
	for (i = n + 1; str[i] != '\0'; i++) /*n indicates the index number*/
		_putchar (str[i]);
	_putchar ('\n');
}

