#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - a function that adds a new node at the beginning of a list_t.
 * @head: linked list head
 * @str: string to store in list_t str
 * Return: the address of the new element or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t  num;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (num = 0; str[num]; num++)
		;

	new->len = num;
	new->next = *head;
	*head = new;

	return (*head);
}
