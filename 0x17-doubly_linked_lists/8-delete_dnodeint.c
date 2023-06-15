#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at an index
 * of a dlistint_t linked list
 * @head: pointer to the pointer of the list
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}

	tmp = current->next;
	current->prev->next = tmp;
	tmp->prev = current->prev;
	free(current);

	return (1);
}
