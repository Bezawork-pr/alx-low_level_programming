#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth value of node
 *
 * @head: head of linked list
 *
 * @index: nth value to find
 *
 * Return: address of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
