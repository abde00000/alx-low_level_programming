#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h : points to the listint_t list
 * Return: number of nodes;
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
