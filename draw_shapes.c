#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

// Prints an arrow by using print_triangle fuction to create the arrow head
// print_square fuction to create the body of the arrow
void print_arrow(int leftCol, int size) 
{
  print_triangle(leftCol, size); // Prints Arrowhead
  int square_start_col = leftCol + size/2+2; //Position of the square, adjusting from the center of the triangle
  print_square(square_start_col, size); //Prints body of the arrow
  putchar('\n'); // Adds a newline at the end of the arrow shape
}
