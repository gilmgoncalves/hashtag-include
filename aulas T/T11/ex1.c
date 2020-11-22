/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* 1) lê números inteiros positivos para um vetor (com máximo de 100 posições), até que seja introduzido o valor -1; 
* 2) imprime o conteúdo do vetor;
* 3) de seguida copie os elementos desse vetor para um segundo vetor, por ordem inversa;
* 4) imprime o conteúdo do segundo vetor. 
*
* Compilar: clang ex1.c -o ex1
* Executar: ./ex1
*/

#include <stdio.h>

void imprimev(int v[], int n);

int main()
{
    int v1[100], v2[100], i=0, n;

    do{
        printf("Introduza valor inteiro positivo (-1 para terminar): ");
        scanf("%d", &v1[i]);
    } while((v1[i++]!=-1)&&(i<100));

    n=i-1;

    imprimev(v1,n);

    for(i=0;i<n;i++){
        v2[i]=v1[n-1-i];
    }

    imprimev(v2,n);

    return 0;
}

void imprimev(int v[], int n){
    int i;

    printf("\n[");
    for(i=0;i<n;i++)
        printf(" %d", v[i]);
    printf("]\n");
}

