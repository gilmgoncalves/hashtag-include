/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo de utilização da instrução for 
* Calcular a soma de todos os números pares entre 2 e 100.
*
* Compilar: clang continue.c -o continue
* Executar: ./continue
*/

#include <stdio.h>

int main()
{
    int soma = 0, numero;
    for(numero = 2; numero <= 100; numero += 2) {
        soma += numero;
    }
    printf("Soma e’ %d\n", soma);

    return 0;
}
