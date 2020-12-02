/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo de função que retorna um apontador
*
* Compilar: clang retornap.c -o retornap
* Executar: ./retornap
*/

#include <stdio.h>

int* max(int *a, int *b, int *c)
{
    int *z;
    z = a;
    if (*b > *z) z = b;
    if (*c > *z) z = c;
    return z;
}

int main()
{
    int x=2, y=4, z=3;
    printf("%d\n", *max(&x, &y, &z));
}