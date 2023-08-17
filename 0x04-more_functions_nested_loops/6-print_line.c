#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of the time _character
 * should be printed
*/

int print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int lnchr;
	for (lnchr = 0; lnchr < n; lnchr++)
	{
			_putchar('_');
	}
		_putchar('\n');
}

int main(void)
{
print_line(5);
print_line(0);
print_line(3);
return 0;
}
