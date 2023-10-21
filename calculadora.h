#ifndef CALCULADORA_RPN_CALCULADORA_H
#define CALCULADORA_RPN_CALCULADORA_H
#include "libprg/src/include/libprg/libprg.h"
#include <stdio.h>

void check_op(char op, Stack *s){
    int x, y;

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


//    if(op="+"){
//
//    }
//    if(op="-"){
//
//    }
//    if (op="*"){
//
//    }
//    if (op="/"){
//
//    }





}



#endif //CALCULADORA_RPN_CALCULADORA_H
