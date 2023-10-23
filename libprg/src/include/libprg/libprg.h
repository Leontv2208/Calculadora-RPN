#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H
#include <stdbool.h>

#define D int

typedef struct{
    D *values;
    int top;
    int n_elem;
    int max_size;
} Stack;

void create_stack(Stack *s, int max_size);
void stack_push(Stack *s, D n);
D stack_pop(Stack *s);
int stack_size(Stack *s);
bool stack_is_empty(Stack *s);
bool stack_is_full(Stack *s);
void print_stack(Stack *s);
void destroy_stack(Stack *s);

#endif
