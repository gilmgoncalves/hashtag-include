/* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo de utilização do continue para terminar iteração
*
* Compilar: clang continue.c -o continue
* Executar: ./continue
*/

#include <stdio.h>

int main()
{
    int x = 0;
	
    while (x < 10)
    {
    	x++;
	/* se x for 5, é iniciada a próxima iteração */
    	if (x == 5) continue;
    	printf ("%d ", x);
    }
}
