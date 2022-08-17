#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node
 *
 * @head: head of linked list
 *
 * @idx: where new node should be added
 *
 * @n: data of int in node
 *
 * Return: address of new node
 * if fail: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	listint_t *prev;
	unsigned int count = 0;

	if (!*head)
		return (NULL);

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	temp = *head;
	while (temp)
	{
		if (count == idx)
		{
			break;
		}
		prev = temp;
		temp = temp->next;
		count++;
	}
	prev->next = new;
	prev = prev->next;
	new->next = temp;
	new->n = n;

	return (new);
}
