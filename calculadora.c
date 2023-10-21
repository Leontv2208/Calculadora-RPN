#include "calculadora.h"
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 50

int main() {

    Stack rpn;
    create_stack(&rpn, 3);

    char entry[MAX_SIZE];

    printf("Entre com os valores: ");
    gets(entry);

    int t = strlen(entry);
    char *token = strtok(entry, " ");

    while(token != NULL){
        printf("%s\n",  token);
        token = strtok(NULL, " ");
    }

    destroy_stack(&rpn);
    return 0;
}