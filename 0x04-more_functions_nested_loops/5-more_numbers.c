#include "main.h"

/**
 * more_numbers - print 0 - 14 times and you
 * you can only use _putchar three times
 *
 * Return: always 0
*/

void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar (i);
		}
		_putchar ('\n');
	}
}
