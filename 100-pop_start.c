#include "monty.h"
/**
* pop_start - delete the top node at the begning
* @head: head of the double linked list
* @n: number to be inserted to the list
* Return: head of the node, or Null
*/
stack_t *pop_start(stack_t **head, unsigned int n)
{
	stack_t *current;
	current = current->next;
	current->prev = NULL;
	*head = current;

	return (*head);
}
