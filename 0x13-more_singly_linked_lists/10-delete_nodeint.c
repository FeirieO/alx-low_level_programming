#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: Success or Failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temps = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temps);
		return (1);
	}

	while (j < index - 1)
	{
		if (!temps || !(temps->next))
		{
			return (-1);
		}
		temps = temps->next;
		j++;
	}
	current = temps->next;
	temps->next = current->next;
	free(current);
	return (1);
}
