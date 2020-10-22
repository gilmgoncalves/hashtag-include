/* #include
*
* MIECC - FEUP / PROG1 - EEC005
*
* Troca o valor de duas variáveis
*
* Compilar: clang media.c -o media
* Executar: ./media
*/

#include <stdio.h>

int main()
{
    float x, y, aux;
    x = 3.7; y = -0.9;
    aux = x; x = y; y = aux;
    printf("%f %f\n", x, y);
}
