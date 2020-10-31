/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* ilustra a cgamada de funções
*
* não esquecer de compilar com -lm */
*
* Compilar: clang sqrt.c -o srqt -lm
* Executar: ./sqrt
*/

#include <stdio.h>
#include <math.h>

float sqr(float x)
{
	return x * x;
}
int main()
{
	float a, b;
	printf("Escreva dois numeros: ");
	scanf("%f %f", &a, &b);
	printf("O quadrado de a+b e' %f\n", sqr(a + b));
	printf("A oitava potencia de a+b e' %f\n", sqr(sqr(sqr(a + b))));
	printf("O valor absoluto de a+b e' %f\n", sqrt(sqr(a + b)));
}
