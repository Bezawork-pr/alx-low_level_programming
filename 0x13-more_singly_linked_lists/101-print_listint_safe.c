#include "lists.h"
/**
 * print_listint_safe - print list
 *
 * @head: takes head
 *
 * Return: Number of nodes
 * if fail exit(98)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
		exit(98);
	while (head)
	{
		if ((head->next) < head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			head = head->next;
		}
		else
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			printf("->[%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}
	return (count);
}
