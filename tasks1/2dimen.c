#include <stdio.h>
/**
 * main = accessing values in a 2 dimensional array
 * Return: void
 */
int main(void)
{
	int a[5][2] = {{0,3}, {2,6}, {5,7}, {8,20}, {5,8}};/* arrays with 5rows two columns*/
	int i, j;

	for (i = 0; i < 5; i++)/*outputting each element in the array*/
	{
		for (j = 0; j < 2; j++)
		{
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
		}
	}
	return (0);
}
