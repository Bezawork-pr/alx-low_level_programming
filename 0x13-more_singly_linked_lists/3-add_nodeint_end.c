#include "lists.h"
/**
 * add_nodeint_end - Add a new node at the end
 *
 * @head: memory address of head
 *
 * @n: int to be added to new node
 *
 * Return: Address of new element
 * Otherwise, NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->n = n;
	new->next = NULL;
	return (new);
}
