#ifndef PILE_H
#define PILE_H

#include <stdlib.h>
#include <stdbool.h>

// Structure de la pile
typedef struct StackNode {
    int data;
    struct StackNode *next;
} StackNode;

typedef struct Stack {
    StackNode *top;
    size_t size;
} Stack;

// Fonctions pour manipuler la pile
Stack* stack_create(void);
bool stack_is_empty(Stack *stack);
void stack_push(Stack *stack, int value);
int stack_pop(Stack *stack);
int stack_top(Stack *stack);
size_t stack_size(Stack *stack);
void stack_free(Stack *stack);

#endif // PILE_H
