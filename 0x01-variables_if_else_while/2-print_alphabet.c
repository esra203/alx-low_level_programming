#include <stdio.h>

/**
 * main - print alphabest
 *
 * Description: want to print alphabest
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
