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
* puts_half - Entry point
*
* Descritption: 'print un caracter sur 2'
* @s: is an string
*
* Return:.
*/

void puts_half(char *str)
{
	int i = 0;
	int len = _strlen(str);
	while (*str != '\0')
	{
		if (i <= (len -1) / 2)
			;
		else
		{
			_putchar(*str);
		}
		i++;
		str++;
	}
	_putchar('\n');
}
