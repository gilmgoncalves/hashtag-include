/*  #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* lê um número inteiro e escreva os valores dos seus bytes 
*
* Compilar: clang decompos.c -o decompos
* Executar: ./decompos
*/

#include <stdio.h>

int main(){
    int i;
    int *pi;
    char *pc;

    printf("Introduza um número inteiro: ");
    scanf("%d", &i);

   /*  pi = &i;
    pc = (char *) pi; */

    pc = (char *) &i;

    printf("%d:%d:%d:%d\n", *(pc+3), *(pc+2), *(pc+1), *pc);
}
