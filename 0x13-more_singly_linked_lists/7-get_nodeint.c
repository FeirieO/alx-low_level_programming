#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node
 * Return: pointer to the node or 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temps = head;

	while (temps && j < index)
	{
		temps = temps->next;
		j++;
	}
	return (temps ? temps : NULL);
}
