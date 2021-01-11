/* 
 * Escreva e teste um programa que para uma data completa de um certo dia (guardada num registo),
 * indique a data de k dias `a frente ou atr ́as do dia especificado.
 * 
 */

#include <stdio.h>
#include "datas.h"

int main(void) {
  data d;
  int ndias;
  char dextenso[40];

  do{
    printf("Indique o dia: ");
    scanf("%d", &(d.dia));
    printf("Indique o mês: ");
    scanf("%d", &(d.mes));
    printf("Indique o ano: ");
    scanf("%d", &(d.ano));
  } while (!dataValida(d));
  
  printf("Quantos dias quer avançar/retroceder? ");
  scanf("%d", &ndias);

  d = somaDias(d, ndias);

  escreveData(dextenso, d);
  printf("A data atualizada é %s\n", dextenso);

  return 0;
}