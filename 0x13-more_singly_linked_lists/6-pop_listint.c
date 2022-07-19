#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *del_tmp = NULL;
	int num;

	if (head == 0 || tmp == 0)
		return (0);

	del_tmp = tmp->next;
	num = (*tmp)->n;
	free(tmp);
	*head = del_tmp;

	return (num);
}
