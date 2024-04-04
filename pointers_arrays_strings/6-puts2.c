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
* puts2 - Entry point
*
* Descritption: 'print un caracter sur 2'
* @s: is an string
*
* Return:.
*/

void puts2(char *s)
{
	int i = 0;

	while (*s != '\0')
    {
		if (i % 2 == 0)
		{
			_putchar(*s);
		}
		s++;
		i++;
	}
}
