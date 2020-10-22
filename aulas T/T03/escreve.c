/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* ilustra utilização da função printf para diferentes tipos de variáveis
*
* Compilar: clang escreve.c -o escreve
* Executar: ./escreve
*/

#include <stdio.h>
int main()
{
    int soma=70;
    float produto=2.21;
    char letra='A';
    double res=2.01E6;
    printf("Valor da soma = %d\n", soma);
    printf("Valor de produto = %f\n", produto);
    printf("Valor de letra = %c\n", letra);
    printf("Valor de resultado = %e (ou %f)\n", res, res);
}
