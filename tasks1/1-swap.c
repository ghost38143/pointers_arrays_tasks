#include "main.h"
/**
 * swap_int - swapping integers
 * @a: first value
 * @b: second value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int p;
	
	p = *a;
	*a = *b;
	*b = p;
}

