#include "stacks.h"

/**
 * Pop - deletes the last inserted element from the stack.
 * Return: deleted value.
*/

int Pop(int top, int *stack_arr)
{
    int value;

    if (top == -1)
    {
        printf("Stack Underflow");
        exit(1);
    }
    value = stack_arr[top];
    top--;

    return (value);
}