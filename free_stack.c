#include "monty.h"
/**
 * free_listint - free node
 * @head: head of node
 * Return: node
 */
void free_stack(stack_t *stack)
{
	stack_t *temp, *Next;
	temp = stack;
	while (temp)
	{
		Next = temp->next;
		free(temp);
		temp = Next;
	}
}