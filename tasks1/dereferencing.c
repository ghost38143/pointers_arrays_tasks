#include <stdio.h>
/**
 * modif_my_char_var - modifying the charccter c
 * Return: 0
 */
void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';
}

/**
 * main - solve me
 * Return: nothing
 */
int main(void)

{
	char c = 'h';
	char *p;

	p = &c;

	printf("the value of c before modification: %d, ('%c')\n", c, c);
	printf("the addres of p bfor modification:, %p\n", p);
	printf("the address of c bfor modification: %p\n", &c);

	modif_my_char_var(p, c);
	printf("the value of c after modification: %d, %c\n", c, c);

	return (0);
}


