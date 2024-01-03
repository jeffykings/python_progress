#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 * Author - JK7
 * Return: If the function fails - NULL.Otherwise - a pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *temp, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = number;
	temp = *head;

	if (*head == NULL || (*head)->n > number)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		while ((number > (temp->next)->n) && temp->next)
		{
			temp = temp->next;
		}

		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (*newnode);
}
