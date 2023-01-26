#include "sort.h"
/**
 * cocktail_sort_list - sorts adoubly linked list in ascending order
 * @list: list of lonked list
 * Return: list
 */

void cocktail_sort_list(listint_t **list)
{
	int swapped;
	listint_t *temp;

	if (list == NULL || *list == NULL)
		return;

	do {
		swapped = 0;
		temp = *list;

		while (temp->next != NULL)
		{
			if (temp->n > temp->next->n)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				temp->prev = temp->next;
				temp->next = temp->next->next;
				temp->prev->next = temp;

				if (temp->next != NULL)
					temp->next->prev = temp;

				swapped = 1;
				print_list(*list);
			}
			temp = temp->next;
		}
		if (!swapped)
			break;

		swapped = 0;
		temp = *list;
		while (temp->prev != NULL)
			temp = temp->prev;

		while (temp->next != NULL)
		{
			if (temp->n < temp->next->n)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				temp->prev = temp->next;
				temp->next = temp->next->next;
				temp->prev->next = temp;

				if (temp->next != NULL)
					temp->next->prev = temp;

				swapped = 1;
				print_list(*list);
			}
			temp = temp->next;
		}
	} while (swapped);
}

