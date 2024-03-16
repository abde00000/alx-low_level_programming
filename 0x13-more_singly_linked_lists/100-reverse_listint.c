#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: pointer to the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *current = *head, *prev = NULL, *next;

    if (current == NULL || current->next == NULL)
        return (current);

    while (current != NULL)
    {
        next = current->next;  /* Store the next node */
        current->next = prev;  /* Reverse the current node's link */
        prev = current;        /* Move pointers one position ahead */
        current = next;
    }
    *head = prev;  /* Move the head to the last node, which has become the first node after reversal */

    return (*head);
}
