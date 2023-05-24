#include "monty.h"
/**
* sq_push - push to the stack
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_push(stack_t **stack, unsigned int counter)
{
    stack_t *current;
    current = *stack;
    printf("sq_push funciton goes here\n");
    if (stack == NULL)
    {
        fprintf(stderr, "Invaled argument passed");
        fclose(info.file);
        free(info.content);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }
    if (info.ord_type == 0)
        add_start(stack, atoi(info.arg));
    else
        add_end(stack, atoi(info.arg));
}
