#include "main.h"
#include <stdio.h>
/**
 * main - function to swap the variable
 * Return: always 0
 */
int main(void)
{       
        int a;
        int b;
        
        a = 98;
        b = 72;
        
        printf("the value of a= %d, b= %d\n", a, b);
        swap_int(&a, &b);
        printf("the value of a= %d, b= %d\n", a, b);
	return (0);
}

