#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		num++;
	}
	return (num);
}
