#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_11x16(char c)
{
  c -= 0x20;
  for (char row = 0; row < 11; row++) {
    unsigned short rowBits = font_11x16[c][row];
    for (char col = 0; col < 16; col++) {
      unsigned short colMask = 1 << (15-col); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}

// Function to print a character in the 8x12 font
void print_char_8x12(char c)
{
  c -= 0x20; // Adjust the character value to map correctly to the font array index
  for (char row = 0; row < 8; row++) //Iterate over each row of the 8x12 character
  {
    unsigned char rowBits = font_8x12[c][row]; //get the bit representation for the current row
    for (char col = 0; col < 12; col++) //Iterate over each column of the 8x12 character
    {
      unsigned char colMask = 1 << (7-col); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' '); // Print a '*' if the bit is set, otherwise print a space
    }
    putchar('\n'); // Print a Newline at the end of each row
  }
}

void print_char_5x7(char c)
{
  c -= 0x20;
  for (char row = 0; row < 5; row++) {
    unsigned char rowBits = font_5x7[c][row];
    for (char col = 0; col < 7; col++) {
      unsigned char colMask = 1 << (7-col); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}
