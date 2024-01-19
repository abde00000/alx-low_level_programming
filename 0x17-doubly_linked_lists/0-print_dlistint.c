#include "lists.h"
/*
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the head list to be printed
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		nodes++;
		temp = temp->next;
	}
	return nodes;
}
