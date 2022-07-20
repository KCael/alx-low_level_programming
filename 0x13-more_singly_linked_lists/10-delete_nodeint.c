#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int len = listint_len(*head), count = 0;
	listint_t *tmp1, *tmp2, *tmp3;

	if (*head == 0)
		return (-1);

	if (len == 1 && index == 0)
	{
		free(*head);
		*head = 0;
		return (1);
	}

	if (index > len - 1)
		return (-1);

	tmp1 = *head;
	while (count < index && index != 0)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		tmp3 = tmp1->next;
		count++;
	}
	if (index == 0)
	{
		*head = tmp1->next;
		free(tmp1);
	}
	else
	{
		tmp2->next = tmp3;
		free(tmp1);
	}
	return (1);
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
