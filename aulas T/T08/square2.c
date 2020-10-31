/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplifica uso de função para
* calcular quadrado de x e utiliza 
* variáveis com o mesmo nome
*
* Compilar: clang square2.c -o square
* Executar: ./square
*/

#include <stdio.h>

/* calcula quadrado de x
*/
float sqr(float x)
{
	float aux;
	aux = x ∗ x;
	return aux;
}

int main()
{
	float a, aux;
	printf("Escreva um numero");
	scanf("%f", &a);
	aux = sqr(a);
	printf("O quadrado de %f e' %f\n", a, aux);
}
