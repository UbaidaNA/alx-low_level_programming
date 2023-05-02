#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to the heas of the list
 * Return: the head node’s data (n) or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = temp;

	return (data);
}
