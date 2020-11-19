/* MIECC - FEUP / PROG1 - EEC005
*
* encoding com XOR 0xAA
*
* Compilar: clang encoding.c -o encoding
* Executar: ./encoding
*/

#include <stdio.h>

int main()
{
    int ch;

    while(1)
    {
        ch = getchar();
        if(ch == EOF)
            break;
        printf(" %X",ch^0xAA);
    }

    return(0);
}