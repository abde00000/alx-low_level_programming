#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: the head of the node
 * @idx: the index
 * @n: the data
 */
listint_t *add_at_0(listint_t **head, int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
listint_t *add_at_end(listint_t **head, int n)
{
	listint_t *new, *current;
	
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	current = *head;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	new->n = n;
	new->next = NULL;
	current->next = new;
	return (new);
}
listint_t *add_at_idx(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current, *prev;
	unsigned int i;

	new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
            return (NULL);
    }
	new->n = n;
	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	prev = current;
	prev->next = new;
	if (current->next != NULL)
	{
		current = current->next;
	}
	else
	{
		current = NULL;
	}
	new->next = current;
	return (new);
}

		
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	unsigned int len = 0;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	if (*head == NULL || idx > len)
	{
		return (NULL);
	}
	current = *head;
	if (idx == 0)
	{
		return (add_at_0(head, n));
	}
	if (idx == len)
	{
		return (add_at_end(head, n));
	}
	return (add_at_idx(head, idx, n));
}
