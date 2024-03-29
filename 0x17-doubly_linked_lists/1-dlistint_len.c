#include "lists.h"
/**
 * dlistint_len - counts number of elements
 *
 * @h: head of double linked list
 *
 * Return: number of elemts
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
