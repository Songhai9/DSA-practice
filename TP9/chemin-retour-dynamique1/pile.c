#include "pile.h"
#include <stdio.h>

Stack* stack_create(void) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    if (stack == NULL)
        return NULL;

    stack->top = NULL;
    stack->size = 0;
    return stack;
}

bool stack_is_empty(Stack *stack) {
    return stack == NULL || stack->top == NULL;
}

void stack_push(Stack *stack, int value) {
    if (stack == NULL)
        return;

    StackNode *new_node = (StackNode *)malloc(sizeof(StackNode));
    if (new_node == NULL)
        return;

    new_node->data = value;
    new_node->next = stack->top;
    stack->top = new_node;
    stack->size++;
}

int stack_pop(Stack *stack) {
    if (stack_is_empty(stack))
        return -1;

    StackNode *node_to_remove = stack->top;
    int value = node_to_remove->data;
    stack->top = node_to_remove->next;
    free(node_to_remove);
    stack->size--;
    return value;
}

int stack_top(Stack *stack) {
    if (stack_is_empty(stack))
        return -1;

    return stack->top->data;
}

size_t stack_size(Stack *stack) {
    return stack == NULL ? 0 : stack->size;
}

void stack_free(Stack *stack) {
    if (stack == NULL)
        return;

    while (!stack_is_empty(stack)) {
        stack_pop(stack);
    }

    free(stack);
}
