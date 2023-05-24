#include "monty.h"
/**
 * execute - find the desired opcode and call the related funciton
 * @content: a single line in the monty file
 * @stack: pointer to
 * @counter: line of monty file being executed
 * @file: file pointer
 * Return: 1 on error, on success 0
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	char *op, *arg;
	unsigned int i, j, flag;

	op = arg = NULL;
	i = j = flag = 0;
	op_optn opcode[] = {{"push", sq_push},
					{"pall", sq_pall},
					{"pint", sq_pint},
					{"pop", sq_pop},
					{"swap", sq_swap},
					{"add", sq_add}};
	/*tokenize content using strtok*/
	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	info.arg  = strtok(NULL, " \n\t");
	/*check  if argument is number*/
	if (info.arg)
	{
		if (info.arg[i] == '-')
			i++;
		for (; i < strlen(info.arg); i++)
		{
			if (info.arg[i] < 48 || info.arg[i] > 57)
			{
				fprintf(stderr, "L<%d>: usage: %s integer\n", counter, op);
				free(content);
				free_stack(*stack);
				fclose(file);
				exit(EXIT_FAILURE);
			}
		}
	}
	else
		info.arg = NULL;

	/* find the appropriate operation code*/
	while (opcode[j].op && op)
	{
		if (strcmp(op, opcode[j].op) == 0)
		{
			opcode[j].func(stack, counter);
			return (0);
		}
		j++;
	}
	if (op && opcode[j].op == NULL)
	{
		fprintf(stderr, "L[%u]\n command not found", counter);
		free(content);
		free_stack(*stack);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	printf("line %d  :- %s\n", counter, content);
	return (1);
}
