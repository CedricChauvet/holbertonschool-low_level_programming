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
* print_array - Entry point
*
* Descritption: 'print un caracter sur 2'
* @*a: is an integer
* @a: is an integer
* @n: is an integer
*
* Return:.
*/
void print_array(int *a, int n)
{
	while (n > 0)
	{
		printf("%d", *a);
		if (n > 1)
		{
			printf(", ");
		}
		if (n == 1)
		{
			printf("\n");
		}
		a++;
		n--;
	}
}
