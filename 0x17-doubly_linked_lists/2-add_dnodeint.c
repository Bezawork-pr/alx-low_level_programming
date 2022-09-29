#include "lists.h"
/**
 * add_dnodeint - add node at the beginning
 *
 * @head: head of double linked
 *
 * @n: number to be added
 *
 * Return: address of new element or
 * Null on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t) * 100);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);

}
