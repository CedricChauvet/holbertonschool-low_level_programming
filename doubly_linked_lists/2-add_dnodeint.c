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



dlistint_t *newNode;
	
	
newNode->n = n;
newNode->prev = NULL;
newNode->next = NULL;

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	if( head == NULL)
	{
		**head = *newNode;
	}
	
	else
	{
		(*head)->n = n;
		(*head)->prev = newNode;
    	newNode->next = (*head);
    	**head = *newNode;
		printf("%d", (*head)->n);
	}
	return (*head);
}