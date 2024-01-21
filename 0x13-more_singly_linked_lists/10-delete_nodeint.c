#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: the head of the linked list
 * @index: the index
 * Return: 1 for success -1 for failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp, *prev;
    unsigned int len = 0;
    unsigned int i;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    if (*head == NULL || len < index)
    {
        return (-1);
    }
    if (index == 0)
    {
        temp = *head;
        if (temp->next != NULL)
        {
            *head = temp->next;
        }
        free(temp);
        return (1);
    }
    else if (index == len)
    {
        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        free(temp);
        temp->next = NULL;
        temp = NULL;
        return (1);
    }
    else
    {
        temp = *head;
        for (i = 0; i < index - 1 && temp != NULL; i++)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        free(temp);
        return (1);
    }
    return (-1);
}