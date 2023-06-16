#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in
 *                            a doubly linked list.
 * @h: Pointer to the address of the head of the list.
 * @idx: Index of the position where the new node should be inserted.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node.
 *         NULL if it fails to add the new node at the specified position.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*h == NULL)
	{
		if (idx != 0)
		{
			free(new_node);
			return (NULL);
		}
		*h = new_node;
		return (new_node);
	}

	temp = *h;
	while (temp != NULL)
	{
		if (count == idx)
		{
			new_node->next = temp;
			new_node->prev = temp->prev;
			if (temp->prev != NULL)
				temp->prev->next = new_node;
			temp->prev = new_node;
			if (count == 0)
				*h = new_node;
			return (new_node);
		}
		count++;
		temp = temp->next;
	}

	free(new_node);
	return (NULL);
}
