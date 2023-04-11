#include "main.h"

/**
 * *_strcat - function with two parameters
 * @dest:its a paramameter pointer to char
 * @src: its a parameter pointer to char
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
