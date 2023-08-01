#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: result of sum
 */

int sum_listint(listint_t *head)
{
	int sums = 0;
	listint_t *temps = head;

	while (temps)
	{
		sums += temps->n;
		temps = temps->next;
	}
	return (sums);
}
