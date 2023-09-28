#include <stdio.h>
/**
 * void set_string - setting the value of a pointer to a charcter
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}

/**
 * main - checking the code
 * Return: nothing
 */
int main(void)
{
	char *s0;
	char *s1;

	s0 = "Bob, Dylan";
	s1 = "Robert, Allen";

	printf("%s, %s\n", s0, s1);
	set_string(&s1, s0);
	printf("%s, %s\n", s0, s1);

	return (0);
}


