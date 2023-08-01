#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer to the first node in the list
 * @idx: index where the new node is
 * @n: data to insert in the new node
 * Return: pointer to the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *newNode;
	listint_t *temps = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (j = 0; temps && j < idx; j++)
	{
		if (j == idx - 1)
		{
			newNode->next = temps->next;
			temps->next = newNode;
			return (newNode);
		}
		else
		{
			temps = temps->next;
		}
	}
	return (NULL);
}
