#include "monty.h"

/**
 * free_stack - frees singly-linked list
 * @head: pointer to the singly-linked list
 * Return: empty
 */
void free_stack(stack_t *head)
{
	stack_t *node = head;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

/**
 * free_list - frees getline list
 * @a: pointer to array of strings
 * Return: empty
 */
void free_list(char *a[])
{
	int i = 0;

	while (a[i] != NULL)
	{
		free(a[i]);
		i++;
	}
}
