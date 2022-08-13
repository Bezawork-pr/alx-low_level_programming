#include "lists.h"
/**
 * add_node_end - insert new node at the end
 *
 * @head: address of head
 *
 * @str: string to be dublicated
 *
 * Return: address of new element
 * otherwise NUll
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	int i = 0;

	if (!head & !str)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	(new->str) = strdup(str);
	for (; str[i] != '\0'; i++)
		;

	(new->len) = i;
	(new->next) = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	(temp->next) = new;
	if (new ==  NULL)
		return (NULL);

	return (new);
}
