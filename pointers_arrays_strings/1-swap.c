#include <stdio.h>
/**
 * swap_int - Entry point
 *
 * Descritption: 'swap a with b'
 * @a: is a pointer
 * @b: is a pointer
 *
 * Return.
 */


void swap_int(int *a, int *b)
{
int c = *a;
*b = *a;
*a = c;
}
