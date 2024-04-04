#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint - check the code
*
*
* @h: is the pointer of the node
*
* Return: int number of nodes.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	struct dlistint_t *newNode;
	newNode = (&head);

	if( (*head) == NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;
	}
	
	else
	{

		newNode->n = n;
		(*head)->next = newNode;
    	newNode->prev = (*head);
		printf("%d  ", newNode->n);
	}
	return (newNode);
}