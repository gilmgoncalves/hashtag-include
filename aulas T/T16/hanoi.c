/* #include 
*
*  MIECC - FEUP / PROG1 - EEC005
*
* exemplo de solução recursiva do problema das 
* Torres de Hanói
* Problema das "Torres de Hanói" apareceu na Europa no século XIX.
* Consiste em três hastes designadas E (esquerda), M (média) e D (direita).
* Na haste E estão empilhados vários discos de diâmetro decrescente. 
* Pretende-se mover os discos de E para D, usando M como auxiliar, de tal 
* forma que, em qualquer movimento, nunca fique um disco de diâmetro maior 
* sobre outro de diâmetro menor. Diz-se que num Templo em Hanói os monges 
* se entregam a esta tarefa de mover os disco, em número de 64; quando 
* todos os discos estiverem empilhados em D o mundo acabará.
*
* Compilar: clang hanoi.c -o hanoi
* Executar: ./hanoi
*/

#include <stdio.h>
#include <stdlib.h>

#define ESQUERDA 0
#define MEIO 1
#define DIREITA 2


void print_title(){
    system("clear");
    printf("Welcome to\n");
    printf("\t\tH   H AAAAA N   N OOOOO IIII\n");
    printf("\t\tH   H A   A NN  N O   O  II\n");
    printf("\t\tHHHHH AAAAA N N N O   O  II\n");
    printf("\t\tH   H A   A N  NN O   O  II\n");
    printf("\t\tH   H A   A N   N OOOOO IIII\n");
    printf("\n\n");
}
/* move um disco da haste inicial (ini)
 * para a haste final (fin) */
void moverdisco(int ini, int fin) {
    char *haste[3] = { "da esquerda", "do meio", "da direita" };
    printf("Mover disco da haste %s para a haste %s\n", haste[ini], haste[fin]);
}

/* Solucao recursiva das Torres de Hanoi para k discos com
 * hastes inicial (ini) e final (fin), usando auxiliar (aux). */
void mover(int k, int ini, int fin, int aux){
    if(k > 1){
        mover(k-1, ini, aux, fin);
        moverdisco(ini, fin);
        mover(k-1, aux, fin, ini);
    }
    else
        moverdisco(ini, fin);    
}

int main(){
    int n;
    
    print_title();
    printf("Quantos discos? ");
    scanf("%d", &n);
    mover(n, ESQUERDA, DIREITA, MEIO);

    return 0;    
}