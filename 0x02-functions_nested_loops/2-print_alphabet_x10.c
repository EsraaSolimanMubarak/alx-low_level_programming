#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet in lowercase 10
 *  times followed by newline
 *
 * Description: Prints lowercase alphabet 10 times using _putchar function.
 *              Starts from 'a' and ends at 'z', printing each letter
 *               once per iteration.
 *              Newline character is printed after each iteration.
 *
 * Return: None
 */

void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0; i < 10; i++)
{
letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');
}
}
