/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo de if (selecção exclusiva)
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
    
    if (nota >= 75 && nota < 90)
        printf("Bom\n");
    
    if (nota >= 50 && nota < 75)
        printf("Suficiente\n");
    
    if (nota < 50)
        printf("Insuficiente\n");
}
