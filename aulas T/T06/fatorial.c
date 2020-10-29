/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo de repetição definida - cálculo do fatorial
* apenas funciona para valores de n <= 12
*
* Compilar: clang fatorial.c -o fatorial
* Executar: ./fatorial
*/

#include <stdio.h>

int main(){
    int n, termo, fat = 1;
	printf("Escreva o numero: ");
	scanf("%d", &n);

	termo = n; 			/* multiplicador */
	while (termo > 1) {
		fat = fat * termo;  /* actualiza fat */
		termo = termo - 1; 	/* actualiza termo */
	}

	printf("Fatorial de %d = %d\n", n, fat);
}
