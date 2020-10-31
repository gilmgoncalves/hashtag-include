/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo de utilização do break para terminar repetição
*
* Compilar: clang break.c -o break
* Executar: ./break
*/

#include <stdio.h>

int main()
{
    int x = 0;
	
    while (x < 10)
    {
    	x++;
	/* se x for 5, ciclo termina imediatamente */
    	if (x == 5) break;
    	printf ("%d ", x);
    }
}
