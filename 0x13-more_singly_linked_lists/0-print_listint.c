#include "lists.h"
/**
 * print_listint - print linked list
 *
 * @h: head of linked list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t countprint = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		countprint++;
	}
	return (countprint);
}
