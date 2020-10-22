/* #include 
*
*  MIECC - FEUP / PROG1 - EEC005
*
* retipagem: escreve o valor sem parte decimal, neste caso o valor 16.
*
* Compilar: clang retipagem.c -o retipagem
* Executar: ./retipagem
*/

#include <stdio.h>

int main()
{
    float x = 16.78;
    printf("%d\n", (int)x);

    return 0;
}
