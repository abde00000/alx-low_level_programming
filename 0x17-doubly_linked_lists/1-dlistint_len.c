#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the head of the linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t elements = 0;

	if (temp == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		elements++;
		temp = temp->next;
	}
	return (elements);
}
