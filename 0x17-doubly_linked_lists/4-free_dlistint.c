#include "lists.h"

/**
 * free_dlistint - frees a dlidtint_t
 * @head: head of double list
 * Return: void
 */

void free_dlistin(dlistint_t *head)
{
	dlistint_t *nav, *nav2;

	nav = head;
	while (nav)
	{
		nv2 = nav->next;
		free(nav);
		nav = nav2;
	}
}
