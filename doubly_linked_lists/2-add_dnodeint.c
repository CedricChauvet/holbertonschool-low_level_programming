#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint - check the code
*
*
* @head: is the pointer of the node
* @n: is the number of nodes
* Return: int number of nodes.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (*head == NULL)
	{
		(newNode)->n = n;
		(newNode)->next = NULL;
		(newNode)->prev = NULL;
		*head = newNode;
		return (*head);
	}
	else
	{
		(newNode)->n = n;
		(newNode)->next = *head;
		(newNode)->prev = NULL;
		(*head)->prev = newNode;
		*head = newNode;
		return (newNode);
	}
	free(newNode);
}
