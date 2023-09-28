#include <stdio.h>
/**
 * void print_diagsums - adding diagonal matrix both secondanry and primary
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;
	
	for (index = 0; index < size; index++)
	{
		sum1 += a[index]; /*accesing the first value of the current position pointed by a*/
		a += size; /*increasing size to the nxt row*/
	}
	a -= size; /*returning pointer to its original position*/

	for (index = 0; index < size; index++) /*the second diagonal*/
	{
		sum2 += a[index];
		a -= size;
	}
	printf("%d,%d\n", sum1, sum2);
}
/**
 * main - check the code above
 * Return: void
 */
int main(void)
{
	int c3[3][3] = {
		{0, 1, 5},
		{10, 11, 12},
		{1000, 101, 102},
	};

	int c5[5][5] = {
		{0, 1, 2, 3, 4},
		{5, 6, 7, 8, 9},
		{10, 11, 12, 13},
		{14, 15, 16, 17},
		{18, 19, 20, 21},
	};
	print_diagsums((int *)c3, 3);
	print_diagsums((int *)c5, 5);
	return (0);
}



