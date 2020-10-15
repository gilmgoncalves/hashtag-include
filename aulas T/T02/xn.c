/* #include
*
* MIECC - FEUP / PROG1 - EEC005
*
* Programa em C que determina x^n
*
* Compilar: clang xn.c -o xn
* Executar: ./xn
*/

#include <stdio.h>
int main(){
  int expoente=0, n;
	  float base, x=1;

	  printf("Base: "); scanf("%f", &base);
	  printf("Expoente: "); scanf("%d", &n);

	  while (expoente < n){
		x=base*x;
		expoente=expoente+1;
	  }

	  printf("%f^%d = %f\n", base, n, x);
}