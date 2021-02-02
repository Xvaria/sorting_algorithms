#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: The list to be printed
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tlist, *olist;

	if (!*list)
		return
	tlist = *list;
	olist = *list;
	while (olist)
	{
		olist = olist->next;
		while (tlist->prev && (tlist->n < tlist->prev->n))
		{
			tlist->prev->next = tlist->next;
			if (tlist->next)
				tlist->next->prev = tlist->prev;
			tlist->next = tlist->prev;
			tlist->prev = tlist->next->prev;
			if (tlist->prev)
				tlist->prev->next = tlist;
			else
				*list = tlist;
			tlist->next->prev = tlist;
			print_list(*list);
		}
		tlist = olist;
	}
}
