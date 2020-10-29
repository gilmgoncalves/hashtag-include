/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo de repetição indefinida - determina máximo de uma sequência de valores
*
* Compilar: clang maximo.c -o maximo
* Executar: ./maximo
*/

#include <stdio.h>

int main(){
    int num, max, poscorr, posmax;
    
    printf ("Escreva o 1.o numero: ");
    scanf("%d", &num);
    
    max = num;
    poscorr = posmax = 1;
    while (num != 0) {
        printf ("Escreva novo numero: ");
        scanf("%d", &num);
        poscorr++;
        if (num > max) {
            max = num;
            posmax = poscorr;
        }
    }
    
    printf ("Maximo e' %d e ocorreu na posicao %d\n", max, posmax);
}
