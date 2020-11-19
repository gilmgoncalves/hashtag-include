/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Determinar maior potência de 2 menor ou igual que Num
*
* Compilar: clang largestPowerOfTwo.c -o largestPowerOfTwo
* Executar: ./largestPowerOfTwo
*/

#include <stdio.h>

int largestPowerOfTwo(int x);

int main(){
    int num;

    printf("Introduza um valor inteiro: ");
    scanf("%d", &num);

    printf("A maior potência de 2 menor ou igual que %d é %d!\n", num, largestPowerOfTwo(num));

    return 0;
}

int largestPowerOfTwo(int x)
{
    int produto = 2, potencia = 1;
    while(produto <= x){
        potencia = produto;
        produto = 2 * produto;
    }

    return potencia;
}

/* int isPowerOfTwo(int x)
{
    // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
    return (x && !(x & (x - 1)));
} */