#include "main.h"
#include <stdio.h>
/**
 * main - funtion to return length
 * Return: always 0
 */
int main(void)
{
	char *str;
	int len;

	str = "This is my first length of string";
	len = _strlen(str);
	printf("the length is %d\n", len);
	return (0);
}
