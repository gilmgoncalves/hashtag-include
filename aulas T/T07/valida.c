/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo de utilização da instrução do-while 
* ler um valor real no intervalo [A,B]
*
* Compilar: clang valida.c -o valida
* Executar: ./valida
*/


#include <stdio.h>

#define A -1.0
#define B 11.0

int main()
{
    double x;

    do {
        printf("Escreva um real em [%.2f,%.2f]: ", A, B);
        scanf("%lf", &x);
    } while (x < A || x > B);

    printf("%f\n", x);

    return 0;
}
