#include "main.h"
/**
 * _strlen - function to find the length of the string
 * @length: the value to be determined
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}
