#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to head of list.
 * Return: 0 if there is no cycle, 1 if there is a cycle.
 */
int check_cycle(listint_t *list)
{
	listint_t *zicho1, *zicho2

	if (list == NULL || list->next == NULL)
		return (0);

	zicho1 = list->next;
	zicho2 = list->next->next;

	while (zicho1 && zicho2 && zicho2->next)
	{
		zicho1 = zicho1->next;
		zicho2 = zicho2->next->next;

		if (zicho1 == zicho2)
			return (1);
	}
	return (0);
}
