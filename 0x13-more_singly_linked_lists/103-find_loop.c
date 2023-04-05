#include "lists.h"

/**
 * find_listint_loop - Finds the node where a loop starts in a linked list.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: A pointer to the node where the loop starts, or NULL if there is no
 *         loop in the list.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return tortoise;
		}
	}
	return NULL;
}
