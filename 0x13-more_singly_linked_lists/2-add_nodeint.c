#include "lists.h"
/**
 * add_nodeint - Adds new node at the beginning
 *
 * @head: address of head
 *
 * @n: int value of struct int
 *
 * Return: Address on Success or
 * NULL on fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	temp = *head;
	*head = new;
	new->n = n;
	new->next = temp;
	return (new);
}
