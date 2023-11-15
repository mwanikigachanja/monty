#ifndef __HOOLB__
#define __HOOLB__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/syscall.h>
#include <string.h>

/**
 * struct stack_s - a doubly linked list representation of a stack
 * @n: an integer
 * @prev: this points to previous element of the stack 
 * @next: this points to next element of the stack
 *
 * Desc: a doubly linked list node structure
 * Monty Project- for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Desc: opcode and its function
 * Monty project - stack, queues, LIFO, FIFO 
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_num);
} instruction_t;

void pint(stack_t **stack, unsigned int line_num);
void free_stack(stack_t *head);
int pushint(char *list, int ln);
int _strcmp(char *opcode, char *list);
void add(stack_t **stack, unsigned int line_num);
void swap(stack_t **stack, unsigned int line_num);
void pop(stack_t **stack, unsigned int line_num);
void push(stack_t **stack, unsigned int line_number, int n);
void pall(stack_t **stack, unsigned int line_num);
void execute(char *string[], stack_t *stack);
int nlfind(char *list);
void free_list(char *a[]);
int combfind(char *list, int ln);


#endif
