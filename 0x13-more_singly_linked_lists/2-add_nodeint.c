#include "lists.h"
/**
  *add_nodeint - functions add a new node at the beginning
  *@head: the head of a list
  *@n: n element.
  *Return: address of a new element or NULL
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
