#include "lists.h"
/**
 * free_listint_safe - frees list
 *
 * @h: takes head of linked list
 *
 * Return: the size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t count = 0;

	if (*h == NULL)
		return (count);
	temp = *h;
	while (*h)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}
	return (count);
}
