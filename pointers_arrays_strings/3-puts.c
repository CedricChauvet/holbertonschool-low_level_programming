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
write(1,str,strlen(str));
write(1, "\n", 2);
return;
}