#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	/*find the size of dest array*/
	while (dest[i])
	{
		i++;
	}
	/*iterate through each src array value without the null byte*/
	j = 0;
	while (src[j])
	{
		/*append src[j] to dest[i] while overwrittingthe null byte in dest*/
		dest[i++] = src[j];
		j++;
	}
	return (dest);
}
