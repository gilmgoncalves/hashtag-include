/* #include 
*
*  MIECC - FEUP / PROG1 - EEC005
*
* retipagem: escreve o código numérico de um carácter.
*
* Compilar: clang retipagemc.c -o retipagemc
* Executar: ./retipagemc
*/

#include <stdio.h>

int main()
{
    char c;
    printf("Escreva um caracter\n");
    scanf("%c", &c);
    printf("O codigo de %c e’ %d\n", c, (int)c);

    return 0;
}
