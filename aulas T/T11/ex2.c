/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* 1) preenche cada posição de dois vetores (de 5 elementos inteiros não repetidos cada) com números introduzidos pelo utilizador;
* 2) imprime os que são comuns a ambos os vetores.
*
* Compilar: clang ex2.c -o ex2
* Executar: ./ex2
*/

#include <stdio.h>

int main()
{
    int v1[5], v2[5], i, j;

    printf("Introduzao 5 inteiros não repetidos para o 1o vetor:");
    for(i=0;i<5;i++)
        scanf("%d", &v1[i]);
    printf("Introduzao 5 inteiros não repetidos para o 2o vetor:");
    for(i=0;i<5;i++)
        scanf("%d", &v2[i]);

    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            if(v1[i]==v2[j])
                printf(" %d", v1[i]);
    printf("\n");
    
    return 0;
}
