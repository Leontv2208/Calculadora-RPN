#include "calculadora.h"

#define MAX_SIZE 25

int main() {

    Stack rpn;
    create_stack(&rpn, MAX_SIZE);
    char entry[MAX_SIZE*3];

    while(true) {

        //lê os valores de entrada
        printf("Entre com os valores: ");
        gets(entry);

        //separa a string de entrada para pegar a 1ª substring até o primeiro espaço
        char *token = strtok(entry, " ");

        //ao digitar end no terminal, o programa se encerra
        if (strcmp(token, "end") == 0){
            destroy_stack(&rpn);
            return 0;
        }

        //loop até que o ponteiro token seja totalmente varrido
        while (token != NULL) {
            //imprime o elemento atual no ponterio
            printf("-> %s\n", token);
            //Condicional: Se for detectado {+, -, *, /} atravez de strcmp, o programa executa a função check_op
            if(strcmp(token, "+") == 0 || strcmp(token, "-") == 0 || strcmp(token, "/") == 0 || strcmp(token, "*") == 0 ){
                check_op(&rpn, *token);
            } else {
                //caso não seja um caractere de operação, o elemento lido será adicionado a pilha
                stack_push(&rpn, atoi(token));
            }
            //lê o ponteiro da posição atual, até o próximo delimitador
            token = strtok(NULL, " ");
            //imprime a memoria(pilha) atual da calculadora
            printf("Memoria: ");
            print_stack(&rpn);
        }
    }
}