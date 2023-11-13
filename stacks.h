#ifndef STACKS_H
#define STACKS_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void Push(int data, int top, int *stack_arr);
int Pop(int top, int *stack_arr);
void print_stack(int top, int *stack_arr);

#endif