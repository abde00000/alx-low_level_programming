#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: the head of the linked list
 * @idk: the index
 * @n: the data
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *Nprev, *Nnext, *new; /*Node prev, Node next*/
	size_t len;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*h == NULL)
	{
		return (NULL);
	}
	while (*h != NULL)
	{
		len++;
		*h = (*h)->next;
	}
	if (len <= idx)
	{
                return (NULL);
        }
	else
	{
		if (idx == 0)
		{
			add_dnodeint(h, n);
		}
		else if (idx == len - 1)
		{
			add_dnodeint_end(h, n);
		}
		else
		{
			new->n = n;
			Nprev = *h;
			for (i = 0; i < idx - 1 && Nprev != NULL; i++)
			{
				Nprev = Nprev->next;
			}
			new->prev = Nprev;
			Nnext = *h;
			for (i = 0; i < idx && Nnext != NULL; i++)
			{
				Nnext = Nnext->next;
			}
			new->next = Nnext;
			Nnext->prev = new;
			return (new);
		}
	}
	return NULL;
}	
