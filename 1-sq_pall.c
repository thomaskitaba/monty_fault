#include "monty.h"
/**
* sq_pall - print all the elements of the stack
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_pall(stack_t **stack, unsigned int counter)
{
    stack_t *current;
    current = NULL;
    printf("sq_pall funciton goes here\n");
    /*TODO: check if stack and *stack == NULL*/
    if (*stack && stack)
    {
        current = *stack;
        while(current)
        {
            printf("%d\n", current->n);
            current = current->next;
        }
    }
    else
    {
        fprintf(stderr, "L<%u>: can't pint, stack empty", counter);
        exit(EXIT_FAILURE);
    }
}
