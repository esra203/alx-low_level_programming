#include "main.h"

/**
 * print_line - prints a straight line
 * @n: is the number of the time _character
 * should be printed
 * Return: void
*/

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int lnchr;

		for (lnchr = 0; lnchr < n; lnchr++)
			_putchar('_');
		_putchar('\n');
	}
}
