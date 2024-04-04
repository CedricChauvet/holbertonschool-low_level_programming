#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* dlistint_len - check the code
*
*
* @h: is the pointer of the node
*
* Return: int number of nodes.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
