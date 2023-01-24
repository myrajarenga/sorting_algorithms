#include "sort.h"

/**
 * insertion_sort_list - sorts adoubly linked listinascending order
 *
 * @list : pointer to list of linked list
 *
 * Return: list of linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *sorted = NULL;

	while (current != NULL)
	{
		listint_t *next = current->next;

		if (sorted == NULL || current->n < sorted->n)
		{
			current->prev = NULL;
			current->next = sorted;

			if (sorted != NULL)
				sorted->prev = current;

			sorted = current;
		}
		else
		{
			listint_t *temp = sorted;

			while (temp->next != NULL && current->n > temp->next->n)
				temp = temp->next;

			if (temp->next != NULL)
			{
				current->prev = temp;
				current->next = temp->next;
				temp->next->prev = current;
				temp->next = current;
			}
			else
			{
				current->prev = temp;
				current->next = NULL;
				temp->next = current;
			}
		}
		current = next;
	}

	*list = sorted;
}

