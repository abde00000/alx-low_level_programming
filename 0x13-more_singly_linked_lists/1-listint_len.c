#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h : points to listint_t
 * Return: numb of elements within listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	listint_t const *temp;

	temp = h;
	while (temp != NULL)
	{
		elements++;
		temp = temp->next;
	}
	return (elements);
}
