#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - Prints list of linked list
 *
 * @h: Takes struct list_t
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if ((h->str) == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
