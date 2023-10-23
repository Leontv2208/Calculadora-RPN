#include "calculadora.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 25

int main() {

    Stack rpn;
    create_stack(&rpn, MAX_SIZE);
    char entry[MAX_SIZE*3];
    while(true) {


        printf("Entre com os valores: ");
        gets(entry);

        char *token = strtok(entry, " ");

        if (strcmp(token, "end") == 0){
            goto end;
        }

        while (token != NULL) {
            printf("%s\n", token);
            if(strcmp(token, "+") == 0 || strcmp(token, "-") == 0 ||strcmp(token, "/") == 0 ||strcmp(token, "*") == 0 ){
                check_op(&rpn, *token);
            }
            if (strcmp(token, "+") == 1 && strcmp(token, "-") == 1 && strcmp(token, "/") == 1 &&
                strcmp(token, "*") == 1) {
                stack_push(&rpn, atoi(token));
            }
            token = strtok(NULL, " ");
            print_stack(&rpn);
        }

    }
    destroy_stack(&rpn);
    end: return 0;

}