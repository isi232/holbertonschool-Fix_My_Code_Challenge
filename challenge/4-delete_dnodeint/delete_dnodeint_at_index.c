#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	head_node = *head;
	for (i = 0; i < index; i++)
	{
		head_node = head_node->next;
		if (head_node == NULL)
			return (-1);
	}

	if (head_node->prev != NULL)
		head_node->prev->next = head_node->next;
	else
		*head = head_node->next;

	if (head_node->next != NULL)
		head_node->next->prev = head_node->prev;

	free(head_node);
	return (1);
}
