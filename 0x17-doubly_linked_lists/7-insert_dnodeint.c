#include "lists.h"

#include <stddef.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer ot a pointer of the head of the list
 * @idx: index if list where new node is added
 * @n:data value of new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (tmp != NULL && i < idx -1)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		return (NULL);

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = tmp->next;
	new_node->prev = tmp;
	tmp->next->prev = new_node;
	tmp->next = new_node;

	return(new_node);
}
