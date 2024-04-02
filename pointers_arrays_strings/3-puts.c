#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - Entry point
 *
 * Descritption: 'swap a with b'
 * @str: is an string
 *
 * Return: .
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
