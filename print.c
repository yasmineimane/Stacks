#include "stacks.h"

/**
 * print_stack - prints a stack.
 * Return: void.
*/

void print_stack(int top, int *stack_arr)
{
    int i;

    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    for (i = top ; i >= 0 ; i--)
    {
        printf("%d\n", stack_arr[i]);
    }
    printf("\n");
}