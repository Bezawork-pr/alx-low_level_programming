#include "lists.h"
/**
 * add_node - Inset new node
 *
 * @head: takes addres of head
 *
 * @str: string to be duplicated
 *
 * Return: address of new element
 * otherwise Null if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	int i = 0;

	new = malloc(sizeof(list_t));
	temp = *head;
	*head = new;
	(new->str) = strdup(str);
	for (; (new->str)[i] != '\0'; i++)
	{}
	(new->len) = i;
	(new->next) = temp;
	if (*head == NULL)
	{
		return (NULL);
	}
	return (*head);

}
