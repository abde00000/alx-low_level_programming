#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node of a listint_t, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *current = head;
    unsigned int count = 0;
    unsigned int i;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    if (index >= count)
        return NULL;
    current = head;
    for (i = 0; i < index; i++)
    {
        current = current->next;
    }
        return (current);
}
