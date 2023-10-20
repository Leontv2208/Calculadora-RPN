#include "calculadora.h"
#include <stdio.h>

int main() {
    int x;
    char y;
    Stack a;
    create_stack(&a, 3);


    for(int i=0; i<3; i++){
    scanf("%d%1c", &x, &y);
    stack_push(&a, x);

    print_stack(&a);
    printf("%c\n", y);
    }

    switch (y) {

    }
    return 0;





}