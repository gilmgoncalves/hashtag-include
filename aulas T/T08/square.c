/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplifica uso de função para
* calcular quadrado de x
*
* Compilar: clang square.c -o square
* Executar: ./square
*/

#include <stdio.h>

/* calcula quadrado de x
*/
float sqr(float x)
{
	return x * x;
}

int main()
{
	float a, b;
	printf ("Escreva um numero: ");
	scanf ("%f", &a);
	b = sqr(a);
	printf ("O quadrado de %f e’ %f\n", a, b);
}
