/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Escrever um programa que determine o mínimo de uma sequência de valores inteiros positivos.
* Assuma que o primeiro valor introduzido indica o número de valores na sequência.
*
* Compilar: clang minimo.c -o minimo
* Executar: ./minimo
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int min = INT_MAX, numval, valor, i;
    
    scanf ("%d", &numval);
    for(i=0;i<numval;i++){
        scanf ("%d", &valor);
        if (valor<min) min=valor;
    }
    
    printf ("Minimo = %d\n", min);
}
