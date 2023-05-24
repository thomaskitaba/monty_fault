#include "monty.h"
/**
* add_end - add node at the end of d_list
* @head: head of the doublec
* @n: number to be inserted
* Return: inserted node address, or NUll
*/
stack_t *add_start(stack_t **head, int n)
{
stack_t *current, *Next, *list;
current = Next = *head;
list = NULL;

list = (stack_t *)malloc(sizeof(stack_t));
if (list == NULL)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
list->n = n;
/*handle empty head*/
if (*head == NULL)
{
	list->prev = NULL;
	list->next = NULL;
	*head = list;
	return (*head);
}
/*go to the end of the node*/
while (Next)
{
	current = Next;
	Next = Next->next;
}
	current->next = list;
	list->prev = current;
	list->next = NULL;
	return (*head);
}
