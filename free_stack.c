#include "monty.h"

/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *abf;

	abf = head;
	while (head)
	{
		abf = head->next;
		free(head);
		head = abf;
	}
}
