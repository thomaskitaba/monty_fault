#include "monty.h"
/**
* pop_end - delete last node at the end of d_list
* @head: head of the doublec
* @n: number to be inserted
* Return: inserted node address, or NUll
*/
stack_t *pop_end(stack_t **head, unsigned int n)
{
    stack_t *current, *Next;

    current = Next = *head;
    while (Next->next)
    {
        current = Next;
        Next = Next->next;
    }
    current->next = NULL;
    return (*head);
}
