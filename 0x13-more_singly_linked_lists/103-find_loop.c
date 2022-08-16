#include "lists.h"
/**
 * find_listint_loop - find where the loop starts
 *
 * @head: head of linked list
 *
 * Return: address where the lopp begin
 */
listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
		return (NULL);

	while (head)
	{
		if ((head->next) > head)
			break;

		head = head->next;
	}
	return (head);
}
