#include "monty.h"
/**
* sq_pop - pop top of the stack
* @stack: head of the stack
* @counter: line number of the code
* Return: nothing
*/
void sq_pop(stack_t **stack, unsigned int counter)
{
    stack_t *current;
    current = *stack;

    if (*stack == NULL || stack == NULL)
    {
        fprintf(stderr, "L<%u>: can't pop an empty stack", counter);
        fclose(info.file);
        free(info.content);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }
    if (info.ord_type == 0)
    {
        pop_start(stack, counter);
    }
    else
        pop_end(stack, counter);


}
