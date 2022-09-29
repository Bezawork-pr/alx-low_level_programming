#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 *
 * @head: head of node
 *
 * @n:value of new node
 *
 * Return: Address of new node
 * or NULL if unsuccesful
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	new = malloc(sizeof(dlistint_t) * 100);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	last = *head;
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->n = n;
	new->prev = last;
	new->next = NULL;
	return (new);
}
