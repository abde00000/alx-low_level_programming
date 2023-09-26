#include "lists.h"
/**
 * list_len - count num of elements
 * @h: pointer to the structure
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
