#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* _strlen - Entry point
*
* Descritption: 'swap a with b'
* @s: is an string
*
* Return: long int.
*/

long int _strlen(char *s)
{
long int len = 0;

while (s[len] != '\0')
{
len++;
}
return (len);
}

/**
* _strcpy - Entry point
*
* Descritption: 'print un caracter sur 2'
* @*dest: is an String
* @dest: is an integer
* @*src: is an String
* @src: is an integer
*
* Return:a char
*/

char *_strcpy(char *dest, char *src)
	{
	size_t i;
	int len = _strlen(src);
	while (len > 0)
	{
		dest[i] = src[i];
		i++;
		len--;
	}

	dest[i + 1] = '\0';
	return (dest);
}
