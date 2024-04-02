#include <stdio.h>
/**
 * swap_int - Entry point
 *
 * Descritption: 'swap a with b'
 * @a: is an address
 * @b: is a address
 *
 * Return.
 */


void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*a = c;
return;
}
