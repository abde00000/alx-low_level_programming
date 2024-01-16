#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the head of a list
 * Return: the deleted element within the list
*/
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n_element;

	if (*head == NULL)
	{
		return (0);
	}
	n_element = (*head)->n;
	current = *head;
	*head = (*head)->next;
	free(current);

	return (n_element);
}
