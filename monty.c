#include "monty.h"

/**
 * pall - Prints the  values in stack
 * @stack: a pointer to the head of the stack
 * @line_num: a  file's line number
 * Return: Void (0)
 */

void pall(stack_t **stack, unsigned int line_num)
{
	stack_t *h = *stack;
	(void)line_num;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

/**
 * push - this Pushes element to stack
 * @stack: pointer to the head of stack
 * @line_num: a file's line number
 * @n: the variable
 * Return: the address of a new element
 */

void push(stack_t **stack, unsigned int line_num, int n)
{
	stack_t *new, *h = *stack;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer", line_num);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
		exit(EXIT_FAILURE);
	new->prev = NULL;
	new->n = n;
	new->next = *stack;
	if (*stack)
		h->prev = new;
	*stack = new;
}

/**
 * pop - Removes top element of stack
 * @stack: a pointer to head of the stack
 * @line_num: a file's line number
 * Return: Void (0)
 */

void pop(stack_t **stack, unsigned int line_num)
{
	stack_t *h = *stack;

	if (!(*stack))
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}


	if (h)
	{
		*stack = (h)->next;
		free(h);
	}
}

/**
 * swap - this Swaps top two elements of a stack
 * @stack: a pointer to the head of the stack
 * @line_num: a file's line number
 * Return: Void (0)
 */
void swap(stack_t **stack, unsigned int line_num)
{
	stack_t *h = *stack, *ptr;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	if (h && h->next)
	{
		ptr = h->next;
		if (ptr->next)
			ptr->next->prev = h;
		h->next = ptr->next;
		ptr->prev = NULL;
		ptr->next = h;
		h->prev = ptr;
		*stack = ptr;
	}
}
