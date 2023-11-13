#include "stacks.h"

/**
 * main - main function.
 * Return: 0.
*/

int main(void)
{
    int data, stack_arr[MAX], top = -1;
    Push(1, top, stack_arr);
    Push(2, top, stack_arr);
    Push(3, top, stack_arr);
    Push(4, top, stack_arr);
    print_stack(top, stack_arr);
    data = Pop(top, stack_arr);
    print_stack(top, stack_arr);
}