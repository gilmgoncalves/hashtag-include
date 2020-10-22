/* #include 
*
*  MIECC - FEUP / PROG1 - EEC005
*
* retipagem: garante que é feita uma divisão real e não uma divisão inteira.
*
* Compilar: clang retipagemc.c -o retipagemc
* Executar: ./retipagemc
*/

#include <stdio.h>

int main()
{
   int soma = 17, cont = 5;
   float media;

   media = (float) soma / cont;
   printf("Valor da media: %f\n", media);

    return 0;
}
