/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da utilização de apontadores com vetores
*
* Compilar: clang vp.c -o vp
* Executar: ./vp
*/

#include <stdio.h>
int main()
{
	int nota[20], *ip;

	/* inicializa ip com endereço de nota[0] */
	ip = nota; 
           
	printf("%p\n", nota);
	printf("%p\n", ip);
	printf("%p\n", &nota[0]);
}
