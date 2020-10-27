/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo de um bom programa em C
*
* Compilar: clang bomprograma.c -o bomprograma -lm
* Executar: ./bomprograma
*/

#include <stdio.h>
#include <math.h>

#define N 3

int main()
{
    int i = 1, n;
    
    float soma=0;
    
    while (i <= N) { // soma log de N numeros
        printf("numero %d: ", i);
        scanf("%d", &n);
        soma += log(n);
        i++;
    }
    
    /* e^soma igual a multiplicar N numeros */
    printf("resultado = %d\n", (int)exp(soma));

    return 0;
}