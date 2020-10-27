/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo de possível solução para problemas na comparação
*
* Compilar: clang comparabm.c -o comparabem
* Executar: ./comparabem
*/

#include <stdio.h>
#define TOLERANCIA 1.0e-6

int main(){
    float x;
    
    printf ("Escreva um numero real:");
    scanf("%f", &x);
    
    if (x >= 0.0 && x < 1.9 - TOLERANCIA)
        printf ("Sim\n");
    else
        printf ("Não\n");
}
