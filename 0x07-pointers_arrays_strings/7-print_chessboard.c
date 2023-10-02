#include "main.h"
/**
<<<<<<< HEAD
 * print_chessboard - Print a chessboard.
 * @a: The 8x8 chessboard represented as a 2D character array.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
=======
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
>>>>>>> 658b6562281548f92b7bde836c812ac98df12cbf

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
<<<<<<< HEAD
		{
			putchar(a[i][j]);
		}
		putchar('\n');
=======
			_putchar(a[i][j]);
		_putchar('\n');
>>>>>>> 658b6562281548f92b7bde836c812ac98df12cbf
	}
}



