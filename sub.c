#include "monty.h"

/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *abf;
	int sus, nodes;

	abf = *head;
	for (nodes = 0; abf != NULL; nodes++)
		abf = abf->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	abf = *head;
	sus = abf->next->n - abf->n;
	abf->next->n = sus;
	*head = abf->next;
	free(abf);
}
