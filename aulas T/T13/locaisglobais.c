/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo de variáveis locais e globais
*
* Compilar: clang locaisglobais.c -o locaisglobais
* Executar: ./locaisglobais
*/

#include <stdio.h>

float pf;
int pi;

void IntFrac(float x)
{
    pi = (int) x;  /* escreve na variável global pi */
    pf = x-(int)x; /* escreve na variável global pf */
}

int main()
{
    float a;
    printf("Escreva um numero real: ");
    scanf("%f", &a);
    IntFrac(a);
    printf("Parte inteira: %d\n", pi);
    printf("Parte fraccionaria: %f\n", pf);
}