/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo de problemas na comparação
*
* Compilar: clang compara.c -o compara
* Executar: ./compara
*/

#include <stdio.h>

int main(){
    float x;
    
    printf("Escreva um numero real: ");
    scanf("%f", &x);
    
    if (x >= 0.0 && x < 1.9)
        printf ("Sim\n");
    else
        printf ("Nao\n");
}
