#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

//	while (h != NULL)  {
        printf("%d\n", h->n);
//        h = h->next;
        count++;
 //   }
    return count;
}