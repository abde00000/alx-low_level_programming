#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: the head of the linked list
 * @idx: the index
 * @n: the data
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *Nprev, *Nnext, *new, *temp; /*Node prev, Node next*/
	size_t len = 0;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*h != NULL)
	{
		temp = *h;
		while (temp != NULL)
		{
			len++;
			temp = temp->next;
		}
	}
	if (len < idx)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		add_dnodeint(h, n);
	}
	else if (idx == len)
		add_dnodeint_end(h, n);
	else
	{
		Nprev = *h;
		for (i = 0; i < idx - 1 && Nprev != NULL; i++)
			Nprev = Nprev->next;
		new->prev = Nprev;
		Nnext = Nprev->next;
		new->next = Nnext;
		Nprev->next = new;
		if (Nnext != NULL)
			Nnext->prev = new;
		return (new);
	}
	return (new);
}
