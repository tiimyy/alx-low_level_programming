#include "lists.h"
/**
  *listint_len - funtction returns number of elements in list
  *@h: head of the list.
  *Return: number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
