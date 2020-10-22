/* #include 
*
*  MIECC - FEUP / PROG1 - EEC005
*
* Exemplo simples do uso de operadores lógicos em C
*
* Compilar: clang operadoresl.c -o operadoresl
* Executar: ./operadoresl
*/

#include <stdio.h>
int main()
{
    int num;
    
    printf("Introduza um inteiro entre 1 e 10: ");
    scanf("%d", &num);
    
    if (num > 4 && num < 8)
        printf("O número é 5, 6 ou 7\n");

    else if (num <= 2 || num >= 9)
	    printf("O número é 1, 2, 9 ou 10\n");

    else
	    printf("O número é 3, 4 ou 8\n");

    return 0;
}
