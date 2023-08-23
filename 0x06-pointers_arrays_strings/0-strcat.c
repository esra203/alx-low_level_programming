#include "main.h"

/**
 * _strcat - function that  concatenates two strings
 * @dest: pointer to destnation input
 * @src: pointer to srurce input
 *
 * Return: pointer to resulting string @dest
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
	for (j = 0; src[j]; j++)
	{
		/*append src[j] to dest[i] while overwrittingthe null byte in dest*/
		dest[i++] = src[j];
	}
	return (dest);
}
