/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da ordenação de um vetor - ordenação por seleção
*
* Compilar: clang ordena.c -o ordena
* Executar: ./ordena
*/

#include <stdio.h>
void ordena(int v[ ], int n){
    int passo = 0, imin, i, aux;
    
    while (passo < n - 1) {
        imin = passo;
        i = passo + 1;
		
        while (i < n){       /* procura menor */
			if (v[i] < v[imin]) imin = i;
			i++;  }
		
        if (imin != passo) { /* troca elementos */
			aux = v[passo];
			v[passo] = v[imin];
			v[imin] = aux;
			}
		
        passo++;
	}
}

int main() {
    int i=0, v[7] = {17, 3, 31, 9, -3, 35, 10};
    
    ordena(v, 7);
    
    while (i < 7) printf("%d ", v[i++]);	
}