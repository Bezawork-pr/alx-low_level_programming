#include "lists.h"
/**
 * sum_listint -  add all data
 *
 * @head: take head of linked list
 *
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
