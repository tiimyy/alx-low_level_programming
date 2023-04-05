#include "lists.h"
/**
  *free_listint - frees a linked list
  *@head: the head of a list
  *Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}