#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - contains copy of a string
 * @grid: character
 * @height: character
 * Return: NULL if string is null
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
