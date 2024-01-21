#include "lists.h"
/**
 * add_at_0-insert a node at the beginning of the linked list
 * @head: the head of the node
 * @n: the data
 * Return : new node
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
/**
 * add_at_end-insert a node at the end of the linked list
 * @head: the head of the node
 * @n: the data
 * Return : new node
 */
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
/**
 * add_at_idx - insert a node at a given index
 * @head: the head of the node
 * @idx: the index
 * @n: the data
 * Return: new node
 */
listint_t *add_at_idx(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current, *prev;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	new->n = n;
	prev = current;
	current = current->next;
	prev->next = new;
	new->next = current;

	return (new);
}
/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: the head of the node
 * @idx: the index
 * @n: the data
 * Return: new node
 */
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
	if (idx == 0)
	{
		return (add_at_0(head, n));
	}
	if (idx == len)
	{
		return (add_at_end(head, n));
	}
	else
	{
		return (add_at_idx(head, idx, n));
	}
	return (NULL);
}
