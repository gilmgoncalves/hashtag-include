/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da utilização de vetores multidimensionais em funções
*
* Compilar: clang maxmat.c -o maxmat
* Executar: ./maxmat
*/

#include <stdio.h>
#define DIM 3

float maxmat(float v[][DIM], int n) /* ou float (*v)[DIM] */
{
  float max;
  int i, j;
  max = v[0][0];
  for(i=0; i<n; i++){
    for(j=0; j<DIM; j++){
      if (v[i][j]>max) max=v[i][j];
    }
  }
  return max;
}

int main() {
  float x[3][DIM] = {{1,2,3},{5,6,7},{-1,10,-1}};

  printf("%f\n", maxmat(x,3));
  printf("%f\n", maxmat(x,2));
}

