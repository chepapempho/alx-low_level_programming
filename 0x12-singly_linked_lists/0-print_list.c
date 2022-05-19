#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - Prints all list elements
  * @node: A linked list
  * Return: The number of nodes
  */
size_t print_list(const list_t *node)
{
	size_t count = 0;

	while (node != NULL)
	{
		if (node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", node->len, node->str);

		node = node->next;
		count++;
	}

	return (count);
}
