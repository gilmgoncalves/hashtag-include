/* #include 
*
*  MIECC - FEUP / PROG1 - EEC005
*
* Programa que testa biblioteca com duas funções: 
* 1) cálculo da média de dois valores reais
* 2) cálculo de xn com n inteiro.
*
* Compilar: clang main.c -o main utils.o
* Executar: ./main
*/

#include <stdio.h>
#include "utils.h"

int main()
{
   float x, y;
   int n;
   
   printf("Escreva dois reais:"); scanf("%f%f", &x, &y);
   printf("Escreva um inteiro:"); scanf("%d", &n);
   printf("Media = %f\n", media(x, y)); /* escreve media de x e y */
   printf("%f^%d = %f\n", x, n, pot(x, n));  /* escreve x^n */

}
