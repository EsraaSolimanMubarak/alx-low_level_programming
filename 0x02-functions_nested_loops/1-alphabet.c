#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a newline
 *
 * Description: The function print the lowercase alphabet using the
 *     _putchar function, It starts from 'a' and ends at 'z', printing each
 *     letter one at a time. After printing all the letters, a newline
 *     character is printed to move to the next line.
 *
 * Return: None
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');
}
