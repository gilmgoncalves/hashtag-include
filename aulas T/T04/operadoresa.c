/* #include 
*
*  MIECC - FEUP / PROG1 - EEC005
*
* Exemplo simples do uso de operadores aritméticos em C
*
* Compilar: clang operadoresa.c -o operadoresa
* Executar: ./operadoresa
*/

#include <stdio.h>

int main( )
{
    int d=86, div1=10, r;
    float div2=10.0;
    
    printf ("Divisão %d / %.4f = %.4f\n", d, div2, d/div2);
    printf ("Divisão %d / %d = %d\n", d, div1, d/div1);
    printf ("Resto da Divisão %d / %d = %d\n", d, div1, d%div1);

    return 0;
}
