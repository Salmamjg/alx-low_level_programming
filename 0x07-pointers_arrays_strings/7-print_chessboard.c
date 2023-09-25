#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Print a chessboard.
 * @board: The 8x8 chessboard represented as a 2D character array.
 */
void print_chessboard(char (*board)[8]) {
    int i, j;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            putchar(board[i][j]);
            if (j < 7) {
                putchar(' ');
            }
        }
        putchar('\n');
     }
}
