#include <stdio.h>
/**
 * void print_chessboard - enable a function that prints aout a chess board
 * Return: void
 * */

void print_chessboard(char(*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar (a[i][j]);
		}
		putchar ('\n');
	}
	putchar ('\n');
}
/**
 * main check the code above
 * Return: void
 */
int main(void)
{
	char board[8][8] = {
		{'r', 'k', 'b', 'r', 'k', 'b', 'r', 'k'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	};
	print_chessboard(board);
	return (0);
}
