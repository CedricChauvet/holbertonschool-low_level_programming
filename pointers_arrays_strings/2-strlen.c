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
