#include "lists.h"
/**
 * get_nodeint_at_index - get the nth node
 *
 * @head: takes head
 *
 * @index: nth element
 *
 * Return: nth element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	if (index == 0)
		return (head);

	temp = head;
	while (temp->next)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
