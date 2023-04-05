#include "lists.h"
/**
  *print_list - prints elemnts of list_t
  *@h: this is a singly linked list
  *Return: Number
  */
size_t print_list(const list_t *h)
{
	size_t newElement;

	newElement = 0;
	
		while (h != NULL)
		{
			if (h->str ==NULL)
				printf("[%d] %s\n", 0, "(nil)");
			else
				printf("[%d] %s\n", h->len, h->len, h->str);
			h = h->next;
			newElement++
		}
		return (newElement);
}

