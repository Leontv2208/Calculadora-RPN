#ifndef CALCULADORA_RPN_CALCULADORA_H
#define CALCULADORA_RPN_CALCULADORA_H
#include "libprg/src/include/libprg/libprg.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Funçao que verifica o tipo de operação que deverá ser realizada pela calculadora
void check_op(Stack *s, char op){
    D x, y;

    switch (op) {
        case '+':
            x = stack_pop(s);
            y = stack_pop(s);
            stack_push(s, y+x);
            break;
        case '-':
            x = stack_pop(s);
            y = stack_pop(s);
            stack_push(s, y-x);
            break;
        case '*':
            x = stack_pop(s);
            y = stack_pop(s);
            stack_push(s,y*x);
            break;
        case '/':
            x= stack_pop(s);
            y= stack_pop(s);
            stack_push(s, y/x);
            break;
    }
}

#endif //CALCULADORA_RPN_CALCULADORA_H
