/* #include
*
* MIECC - FEUP / PROG1 - EEC005
*
* Programa para o cálculo de x^y
*
* Compilar: clang xy.c -o xy
* Executar: ./xy
*/

#include <stdio.h>
int main()
{
  int expoente=0, n;
	  float base, x=1;

	  printf("Base: "); scanf("%f", &base);
	  printf("Expoente: "); scanf("%d", &n);

	  while (expoente < n) {
		x=base*x;
		expoente=expoente+1;
	  }

	  printf("%f^%d = %f\n", base, n, x);
}