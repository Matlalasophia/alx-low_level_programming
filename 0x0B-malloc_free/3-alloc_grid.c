#include "main.h"
#include<stdlib.h>
/**
 * **alloc_grid - function that returns pointer to a 2 dimensional array of int
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (Success) or NULL
 */

int **alloc_grid(int width, int height)
{


int gridArrayPointer[width][height]; 

int gridSize = sizeof(gridArrayPointer[width][height]);

int* sizeAllocated = &gridSize;
if (width <= 0 || height <= 0)
{
return (NULL);
}
printf("%d\n", sizeAllocated);
return (0) ;
}
