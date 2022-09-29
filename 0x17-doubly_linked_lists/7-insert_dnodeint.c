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
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t) * 100);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	current = *h;
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if ((idx == 0)  || (*h == NULL))
		return (add_dnodeint(h, n));
	while (current)
	{
		if (index == idx)
		{
			new->prev = current->prev;
			new->next = previous->next;
			previous->next = new;
			current->prev = new;
			return (new);
		}
		index++;
		previous = current;
		current = current->next;
	}
	if (index == (idx))
		return (add_dnodeint_end(h, n));
	return (NULL);
}
