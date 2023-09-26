#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: points to the list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodes = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	while (h != NULL)
	{
		printf("[%u] (%s)\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
