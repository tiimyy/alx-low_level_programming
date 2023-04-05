#include "list.h"
/**
  *print_listint- function prints all the elements of a list
  *@h: this is the head of a list
  *Return: number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
