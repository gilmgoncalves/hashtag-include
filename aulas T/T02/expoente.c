/* #include
*
* MIECC - FEUP / PROG1 - EEC005
*
* Programa para o cálculo de 1.5^10
*
* Compilar: clang expoente.c -o expoente
* Executar: ./expoente
*/

#include <stdio.h>

int main(){
	int n=10, expoente=1;
	float x=1;
	while (expoente <= n){
		x=1.5*x;
		expoente=expoente+1;
	}
	printf("1.5^10 = %f\n", x);
}