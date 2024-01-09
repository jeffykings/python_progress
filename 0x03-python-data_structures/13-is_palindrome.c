#include "lists.h"

/**
 * is_palindrome - checks for palindrome
 * @head: of the list
 * Return: 1 for true else 0
 */
int is_palindrome(listint_t **head)
{
	listint_t *reversed_head;
	listint_t *temp = *head, *fast = *head, *slow = *head, *dup = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (1)
	{
		fast = fast->next->next;
		if (fast == NULL)
		{
			dup = slow->next;
			break;
		}
		if (fast->next == NULL)
		{
			dup = slow->next->next;
			break;
		}
		slow = slow->next;
	}

	reversed_head = reverse_2ndpart(&dup);
	while (temp && dup)
	{
		if (temp->n == dup->n)
		{
			temp = temp->next;
			dup = dup->next;
		}
		else
			return (0);
	}

	reverse_2ndpart(&reversed_head);

	if (dup == NULL)
		return (1);
	return (0);
}

/**
 * reverse_2ndpart - reverses the 2nd half of the list
 * @head: starting of the second half of the list
 * Return: the head of the second reversed half
 */
listint_t *reverse_2ndpart(listint_t **head)
{
	listint_t *current = *head, *prev = NULL, *nxt = *head;

	while (current)
	{
		nxt = nxt->next;
		current->next = prev;
		prev = current;
		current = nxt;
	}

	*head = prev;
	return (prev);
}
