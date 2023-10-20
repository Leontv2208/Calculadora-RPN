#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H
#include <stdbool.h>

typedef struct {
    double value;
    int error;
} result_t;

typedef struct{
    int *values;
    int max_size;
    int n_elem;
} List;


void create_list(List *l, int max_size);
void print_list(List *l);
int linear_search(List *l, int x);
void non_ordered_insert(List *l, int x);
void non_ordered_remove(List *l, int x);
int binary_search(List *l, int x);
void ordered_insert(List *l, int x);
void ordered_remove(List *l, int x);

typedef struct{
    int *values;
    int begin;
    int end;
    int capacity;
} Queue;

void create_queue(Queue *q, int size);
void print_queue(Queue *q);

typedef struct{
    int *values;
    int top;
    int n_elem;
    int max_size;
} Stack;

void create_stack(Stack *s, int max_size);
void stack_push(Stack *s, int n);
int stack_pop(Stack *s);
int stack_size(Stack *s);
bool stack_is_empty(Stack *s);
bool stack_is_full(Stack *s);
void destroy_stack(Stack *s);

typedef enum { SUM, SUB } operation_t;

result_t sub(double a, double b);
result_t sum(double a, double b);
result_t compute(double a, double b, operation_t op);



#endif
