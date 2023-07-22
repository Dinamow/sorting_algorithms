#include "sort.h"

/**
 * insertion_sort_list -  sorts a doubly linked list of integers in ascending
 * @list: list to be sorted
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		while (node->prev && node->prev->n > node->n)
		{
			node = swap_nodes(list, node);
			print_list(*list);
		}
		node = node->next;
	}
}

/**
 * swap_nodes - swap two nodes
 * @list: head of the list
 * @first: first node
 * Return: nothing
 */
listint_t *swap_nodes(listint_t **list, listint_t *first)
{
	listint_t *last = first->prev, *current = first;

	last->next = current->next;
	if (current->next)
		current->next->prev = last;
	current->next = last;
	current->prev = last->prev;
	last->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}
