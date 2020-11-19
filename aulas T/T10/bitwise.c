/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplifica operadores de manipulação de bits
* utiliza função para escrever valor em binário
*
* Compilar: clang bitwise.c -o bitwise
* Executar: ./bitwise
*/

#include <stdio.h>

void byte_to_binary(int x);

int main() {
    unsigned int a = 60;	/* 60 = 0011 1100 */  
    unsigned int b = 13;	/* 13 = 0000 1101 */
    int c = 0;
    
    c = a & b;       /* 12 = 0000 1100 */ 
    printf("Valor de c é %d \t", c ); byte_to_binary(c); printf("\n");
    
    c = a | b;       /* 61 = 0011 1101 */
    printf("Valor de c é %d \t", c ); byte_to_binary(c); printf("\n");
    
    c = a ^ b;       /* 49 = 0011 0001 */
    printf("Valor de c é %d \t", c ); byte_to_binary(c); printf("\n");
    
    c = ~a;          /*-61 = 1100 0011 */
    printf("Valor de c é %d \t", c ); byte_to_binary(c); printf("\n");
    
    c = a << 2;     /* 240 = 1111 0000 */
    printf("Valor de c é %d \t", c ); byte_to_binary(c); printf("\n");
    
    c = a >> 2;     /* 15 = 0000 1111 */
    printf("Valor de c é %d \t", c ); byte_to_binary(c); printf("\n");
    
    return 0;
}

void byte_to_binary(int x)
{
    int z;
    for (z = 128; z > 0; z >>= 1)
    {
        printf("%d", (x & z) == z ? 1 : 0);
    }
}