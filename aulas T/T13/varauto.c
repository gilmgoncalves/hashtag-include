/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da criação de variáveis automáticas
*
* Compilar: clang varauto.c -o varauto
* Executar: ./varauto
*/

#include <stdio.h>

int power (int base, int n) {
    int i = 0, p = 1;
    while(i < n) {
        p = p * base;
        i++;
    }
    return p;
}

int main() {
    int i=0;
    while(i < 10) {
        printf("%d %d\n", i, power(2, i));
        i++;
    }
}
