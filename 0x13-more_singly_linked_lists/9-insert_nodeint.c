#include <stdlib>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
unsigned int len = listint_len(*head), count = 0;
	listint_t *new_node, *tmp1, *tmp2;

	if (head == 0 && idx > 0)
		return (0);

	new_node = malloc(sizeof(listint_t));
	if (new_node == 0)
		return (0);

	if (head == 0 && idx == 0)
	{
		new_node->n = n, new_node->next = 0, *head = new_node;
		return (new_node);
	}

	if (idx > len)
	{
		free(new_node);
		return (0);
	}
	tmp1 = *head;
	new_node->n = n;
	while (count < idx && idx != 0)
	{
		tmp2 = tmp1, tmp1 = tmp1->next;
		count++;
	}
	if (idx == 0)
	{
		*head = new_node;
		new_node->next = tmp1;
	}
	else
	{
		tmp2->next = new_node;
		new_node->next = tmp1;
	}
	return (new_node);
}


/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: head pointer of singly linked list
 *
 * Return: Number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int size = 0;

	while (h != 0)
		h = h->next, size++;

	return (size);
}
