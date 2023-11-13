#include "stacks.h"

/**
 * Push - inserts data onto stack.
 * @data: integer value to be inserted.
*/

void Push(int data, int top, int *stack_arr)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow");
        return;
    }
    top++;
    stack_arr[top] = data;
}