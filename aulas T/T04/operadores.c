/* #include 
*
*  MIECC - FEUP / PROG1 - EEC005
*
* Exemplo simples do uso de operadores em C
*
* Compilar: clang operadores.c -o operadores
* Executar: ./operadores
*/

#include <stdio.h>

int main()
{
	int a = 100, b = 3, c;

	c = a + b;
	printf("a + b = %d\n", c);

	c = a - b;
	printf("a - b = %d\n", c);

	/* como funciona? */
	printf("a * b = %d\n", a*b);

	c = a / b;
	printf("a / b = %d\n", c);

	c = 100 % 3;
	printf("a %% b = %d\n", c);

    return 0;
}
