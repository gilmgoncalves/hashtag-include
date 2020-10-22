/* #include
*
* MIECC - FEUP / PROG1 - EEC005
*
* Programa de classifica números (par/impar)
*
* Compilar: clang parimpar.c -o parimpar
* Executar: ./parimpar
*/

#include <stdio.h>

int main(){
    int x
    printf("Introduza um número inteiro positivo:"); 
    scanf("%d",&x); 
    if(x%2 == 1) printf("%d é impar!\n",x); 
    else printf("%d é par!\n",x); 
} 
