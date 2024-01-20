#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"


/**
 * _create_dlist - Create a list
 *
 * @n: Number of elements
 *
 * Return: A pointer to the first element of the created list
 */

int main(void)
{
	dlistint_t *head;
	dlistint_t *node;
	size_t n;

	head = NULL;
	node = insert_dnodeint_at_index(&head, 0, 98);
	if (node)
		printf("-> %d\n", node->n);
	else
		printf("(nil)\n");
	n = print_dlistint(head);
	printf("-> %lu elements\n", n);
	
	return (0);
}