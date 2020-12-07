/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da pesquisa binária em vetores
*
* Compilar: clang pesquisabin.c -o pesquisabin
* Executar: ./pesquisabin
*/

#include <stdio.h>

/* p : posicao onde o elemento foi encontrado. */
/* Retorna 1 se x foi encontrado; 0 no caso contrario. */
int find(int v[ ], int x, int n, int *p)
{
    int baixo = 0, alto = n - 1, medio;
    while (baixo <= alto) /* enquanto existe intervalo de busca */
    {                         
        medio = (int) ((baixo + alto)/2.0); /* índice médio */
        if (x < v[medio])
            alto = medio - 1;  /* intervalo inferior */
        else
        if (x > v[medio])
            baixo = medio + 1; /* intervalo superior*/
        else {
            *p = medio;
            return 1; 	       /* encontrado */
	}
    }
    return 0; 	               /* não encontrado */
}

int main()
{
    int k, p;
    int v[7] = {1, 3, 17, 31, 52, 73, 86}; /* vetor ordenado */

    printf("Valor inteiro a encontrar: "); scanf("%d", &k);

    if (!find(v, k, 7, &p))
        printf("Nao encontrado!\n");
    else
        /* p começa em 0 */
        printf("Encontrado na posicao %d\n", p+1);
}
