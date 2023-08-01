#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element
 * Return: the data inside the element or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temps;
	int n;

	if (!head || !*head)
	{
		return (0);
	}
	n = (*head)->n;
	temps = (*head)->next;
	free(*head);
	*head = temps;

	return (n);
}
