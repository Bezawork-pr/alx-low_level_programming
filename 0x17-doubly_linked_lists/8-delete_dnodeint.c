#include "lists.h"
/**
 * delete_dnodeint_at_index- delete at node given
 *
 * @head: head of node
 *
 * @index: delete node at this index
 *
 * Return: 1 on sucess and -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *previous, *current, *copy;

	previous = *head, current = *head, copy = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			copy = copy->next;
			free(*head);
			*head = copy;
			previous = *head;
			(*head)->prev = NULL;
			return (1);
		}
		else
		{
			free(copy);
			*head = NULL;
			return (1);
		}
	}
	while (current)
	{
		if (idx == index)
		{
			previous->next = current->next;
			free(current);
			return (1);

		}
		idx++;
		previous = current;
		current = current->next;
	}
	return (-1);
}
