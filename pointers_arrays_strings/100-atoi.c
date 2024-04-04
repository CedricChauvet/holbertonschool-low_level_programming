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

int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}
return (len);
}


/**
* _atoi - Entry point
*
* Descritption: 'swap a with b'
* @s: is an string
*
* Return: int.
*/

int _atoi(char *s)
{
	int len = _strlen(s);
	int temp;
	unsigned int atoi = 0;
	int minus = 0;

	while (len > 0)
	{
		temp = ((int)*s) - ((int)'0');

		if (temp >= 0 && temp <= 9)
		{
			atoi = atoi * 10;
			atoi = atoi + temp;
		}
		if (*s == '-')
		{
			minus++;
		}
		s++;
		len--;
	}
	if (minus % 2 != 0)
	{
		atoi = -1 * atoi;
	}
	return (atoi);
}
