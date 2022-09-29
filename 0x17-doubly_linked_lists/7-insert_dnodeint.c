#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 *
 * @h: head of node
 *
 * @idx: index
 *
 * @n: value of new node
 *
 * Return: pointer to new node or NULL
 * on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *previous;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t) * 100);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if ((idx == 0)  || (*h == NULL))
		return (add_dnodeint(h, n));
	else
	{
		while ((*h)->next != NULL)
		{
			if (index == idx)
			{
				break;
			}
			index++;
			previous = *h;
			*h = (*h)->next;
		}
		if ((*h)->next == NULL)
			return (add_dnodeint_end(h, n));
	}
	new->prev = (*h)->prev;
	new->next = previous->next;
	previous->next = new;
	return (new);
}
