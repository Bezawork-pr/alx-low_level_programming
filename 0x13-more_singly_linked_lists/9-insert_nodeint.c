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
	listint_t *copy;
	unsigned int count = 0;

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
		temp = temp->next;
		count++;
	}
	copy = temp;
	temp = new;
	new = copy;
	new->n = n;

	return (new);
}
