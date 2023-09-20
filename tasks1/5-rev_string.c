#include "main.h"
/**
 * rev_string - this function revert the string
 * @s: the string to be reverted
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	for (i = 0; i < length / 2; i++)
	{
		char j;

		j = s[i]; /*swapping charcters*/
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = j;
	}
}



