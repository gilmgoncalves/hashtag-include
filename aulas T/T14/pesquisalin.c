/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da pesquisa linear em vetores
*
* Compilar: clang pesquisalin.c -o pesquisalin
* Executar: ./pesquisalin
*/

#include <stdio.h>

int find(int v[ ], int x, int n, int *p)
 /* p contém a posição onde o elemento foi encontrado  */
 /* retorna 1 se x foi encontrado; 0 no caso contrário */
{
	*p = 0; 		/* busca começa em 0 */
	while (v[*p] != x && *p < n) (*p)++; 	
	if (*p != n)
		return 1; 	/* encontrou */
	else
		return 0; 	/* não encontrou */
}

int main()
{
    int pos, x[5] = {2, 7, -3, 5, 9};
    if (find(x, -3, 5, &pos))
        printf("%d\n", pos);    /* escreve 2   */
    if (find(x, 9, 4, &pos))
        printf("%d\n", pos);    /* nao escreve */
}

