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

	while (head->next != NULL)
	{
		if ((head->next) > head)
			return (count);

		printf("[%p] %d  \n", (void *)head, head->n);
		count++;
		head = head->next;
	}
	return (count);
}
