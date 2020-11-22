/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* determine os números primos menores que um determinado número natural n (máximo 100).
* Utiliza o crivo de Erastótenes
*
* Compilar: clang crivo.c -o crivo
* Executar: ./crivo
*/

#include <stdio.h>

#define NUM 100001

int main() {
  int primos[NUM] = { 1, 1}, pos = 2, i;
  /* número primo assinalado com 0 */

  while(pos < NUM){
    while (primos[pos]==1 && pos < NUM) {
      pos++;
    }

  /* começa a pesquisar a partir do primeiro múltiplo */
    for (i = 2*pos; i <= NUM; i+= pos) {
      primos[i]=1;
    }

    pos++;
  }

  /* imprime números primos */
  for(i=0;i<NUM;i++){
    if(primos[i]==0) printf("%d\n", i);
  }
  printf("\n");

  return 0;
}
