#include "main.h"
#include <stdio.h>
#include <string.h>
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
