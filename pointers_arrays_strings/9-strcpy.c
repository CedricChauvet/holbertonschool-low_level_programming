#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

char *_strcpy(char *dest, const char *src)
	{
	size_t i;

	for ( ; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
