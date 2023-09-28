#include <stdio.h>
/**
 * _strstr - locating a substring in string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])/*checking if the first charcter match*/
		{
			do{
				if(needle[i + 1] == '\0')/*checking if the second charcter is a null byte*/
					return (haystack);
				i++;
			}while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
/**
 * main - checking the above code
 * Return: nothing
 */
int main(void)
{
	char *s = "helloe, World";
	char *f = "World";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}


