/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* 
* Defina e implemente uma função que calcule a divisão inteira entre dois números, 
* sem recorrer aos operadores / e %.
* Entradas: dividendo, divisor
* Saídas: resultado, resto, código de erro (1 –> sem erro, 0 -> erro porque divisor=0) 
*
* Compilar: clang divisaoInteira.c -o divisaoInteira
* Executar: ./divisaoInteira
*/

#include <stdio.h>

int divisaoInteira(int dividendo, int divisor, int *resultado_ap, int *resto_ap);

int main(){
    int dividendo, divisor, resultado, resto, erro;
    printf("Introduza dividendo e divisor:");
    scanf("%d %d", &dividendo, &divisor);

    erro = divisaoInteira(dividendo, divisor, &resultado, &resto);

    if (erro != 0)
        printf("resultado= %d e resto = %d\n", resultado, resto);
    else
        printf("Não é possível efetuar a divisão.\n");

    return 0;    
}

int divisaoInteira(int dividendo, int divisor, int *resultado_ap, int *resto_ap){
    int contador = 0;

    if (divisor == 0)
        return 0;

 /*    *resultado_ap = dividendo / divisor;
    *resto_ap = dividendo % divisor;
 */

    while (dividendo > divisor)
    {
        dividendo -= divisor;
        contador++;
    }
    
    *resultado_ap = contador;
    *resto_ap = dividendo;

    return 1;
}