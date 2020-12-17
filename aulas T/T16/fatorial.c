/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo de função recursiva - cálculo do fatorial
* apenas funciona para valores de n <= 12
*
* Compilar: clang fatorial.c -o fatorial
* Executar: ./fatorial
*/

#include <stdio.h>


/* implementacao recursiva */
int fact(int n){
   if (n==0) return 1;
   else return n*fact(n-1);
}

int main(){
    int n;
	printf("Escreva o numero: ");
	scanf("%d", &n);

	printf("Fatorial de %d = %d\n", n, fact(n));
}
