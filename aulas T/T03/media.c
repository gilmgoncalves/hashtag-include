/* #include
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo simples de atribuição em C
*
* Compilar: clang media.c -o media
* Executar: ./media
*/

#include <stdio.h>

int main()
{
    float x, y, media;

    x = 3.7; y = -0.9;

    media = (x + y) / 2;
    printf("%f\n", media);
}
