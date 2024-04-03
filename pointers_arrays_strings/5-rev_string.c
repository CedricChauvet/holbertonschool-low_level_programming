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

void strcpy_custom(char *dest, const char *src)
	{
	while ((*dest++ = *src++) != '\0')
		;
	}

/**
* rev_string - Entry point
*
* Descritption: 'inverse a string'
* @str: is an string
*
* Return: .
*/

void rev_string(char *str)
{
	int length = _strlen(str);
	int j = 0;
	char *rev_str = (char *) malloc((length - 1) * sizeof(char));
	int i = length - 1;
	while (j < length)
	{
	   rev_str[j] = str[i];
	j++;
	i--;
	}
	rev_str[j] = '\0';
	strcpy_custom(str, rev_str);
}
