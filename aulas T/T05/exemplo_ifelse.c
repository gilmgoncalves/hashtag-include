/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo de if else (selecção encadeada)
*
* Compilar: clang exemplo_if.c -o exemplo_if
* Executar: ./exemplo_if
*/

#include <stdio.h>

int main(){
    int nota;
    
    printf("Nota? "); scanf("%d", &nota);
    
    if (nota >= 90 && nota <= 100)
        printf("Muito Bom\n");
    else if (nota >=75)
        printf("Bom\n");
    else if (nota >=50)
        printf("Suficiente\n");
    else
        printf("Insuficiente\n");
}
