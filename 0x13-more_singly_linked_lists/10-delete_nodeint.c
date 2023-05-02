#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to the pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous_node = *head;
	listint_t *current_node = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(previous_node);
		return (1);
	}

	while (i < index - 1)
	{
		if (!previous_node || !(previous_node->next))
		{
			return (-1);
		}
		previous_node = previous_node->next;
		i++;
	}

	current_node = previous_node->next;
	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
