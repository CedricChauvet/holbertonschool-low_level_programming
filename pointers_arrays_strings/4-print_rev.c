#include "main.h"
#include <stdio.h>
#include <string.h>



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
 * print_rev - Entry point
 *
 * Descritption: 'swap a with b'
 * @str: is an string
 *
 * Return: .
 */
void print_rev(char *str)
{
	int i = _strlen(str);

	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
