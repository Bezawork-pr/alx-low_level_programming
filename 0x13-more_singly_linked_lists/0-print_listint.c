#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements
 *
 * @h: takes struct
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
