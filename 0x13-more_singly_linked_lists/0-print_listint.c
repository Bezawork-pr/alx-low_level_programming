#include "lists.h"
/**
 * print_listint - prints all elements
 *
 * @h: takes struct
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
