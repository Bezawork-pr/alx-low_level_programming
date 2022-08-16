#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index provided
 *
 * @head: head of linked list
 *
 * @index: index that needs to be deleted
 *
 * Return: 1 if SUCESS
 * otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *previous;
	listint_t *current;
	unsigned int count = 0;

	if (!*head)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (count == index)
		{
			break;
		}
		previous = temp;
		temp = temp->next;
		count++;
	}
	current = temp;
	temp = temp->next;
	free(current);
	previous->next = temp;
	return (1);
}
