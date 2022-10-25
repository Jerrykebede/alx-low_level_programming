#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: head of the list
 * Return: The number of nodes
 */ 
size_t print_listint(const listint_t *h)
{
	const listin_t *coursor = h;
	size_t count = 0;

	while (coursor != NULL)
	{
		printf("%\n", cursor->n);
		count += 1;
		coursor = cursor->next;
	}
	return (count);
}
