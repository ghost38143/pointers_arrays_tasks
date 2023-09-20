#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: always 0 success
 */
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	printf("%lu\n", sizeof(s));
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
