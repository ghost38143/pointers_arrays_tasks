#include "main.h"
#include <stdio.h>
/**
 * main - function that enable printing a string in reverse
 * Return: always o success
 */
int main(void)
{
	char *str;

	str = "I want to print you in reverse!";
	printf("%s\n", str);
	print_rev(str);
	return (0);
}
