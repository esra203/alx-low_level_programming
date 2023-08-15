#include "main.h"
/**
 * main -print alphabet
 *
 * Description: A C program that prints  function
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char letter;

	for (letter  = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
