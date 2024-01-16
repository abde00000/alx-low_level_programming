#include "lists.h"
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
return current;
}