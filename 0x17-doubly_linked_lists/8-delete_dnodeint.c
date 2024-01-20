#include "lists.h"
/**
 * free_index_0 - deletes the node at index 0
 * @head: the head of the node
 * Return: 1 if for success -1 for failure
*/
int free_index_0(dlistint_t **head)
{
	dlistint_t *temp = *head;
	*head = temp->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(temp);
	return (1);
}
/**
 * free_index_last - deletes the node at last index
 * @head: the head of the node
 * Return: 1 if for success -1 for failure
*/
int free_index_last(dlistint_t **head)
{
	dlistint_t *temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	if (temp->prev != NULL)
	{
		*head = temp->prev;
		(*head)->next = NULL;
	}
	else
	{
		*head = NULL;
	}
	free(temp);
	return (1);
}
/**
 * free_index_index - deletes the node at specific index
 * @head: the head of the node
 * @index: the index
 * Return: 1 if for success -1 for failure
*/
int free_index_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *prev, *next;
	unsigned int i;

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	prev = current->prev;
	next = current->next;
	if (next != NULL)
	{
		prev->next = next;
		next->prev = prev;
	}
	else
	{
		(prev)->next = NULL;
	}
	free(current);
	return (1);
}
/**
 * delete_dnodeint_at_index - deletes the
 *			node at index index of a dlistint_t linked list.
 * @head: the head of the node
 * @index: the index
 * Return: 1 if for success -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int len = 0;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	if (*head == NULL || index > len)
		return (-1);
	if (index == 0)
	{
		return (free_index_0(head));
	}
	if (index == len)
	{
		return (free_index_last(head));
	}
	else
	{
		return (free_index_index(head, index));
	}
	return (-1);
}
