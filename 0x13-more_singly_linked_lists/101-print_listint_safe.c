#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t
 * Return: NULL
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *linkedList, *h;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	linkedList = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (linkedList == h)
		{
			linkedList = head;
			while (linkedList != h)
			{
				node++;
				linkedList = linkedList->next;
				h = h->next;
			}
			linkedList = linkedList->next;
			while (linkedList != h)
			{
				node++;
				linkedList = linkedList->next;
			}

			return (node);
		}

		linkedList = linkedList->next;
		h = (h->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
