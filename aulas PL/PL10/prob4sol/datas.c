#include <stdio.h>
#include "datas.h"

/* Retorna a data correspondente ao dia seguinte da data d */
data diaSeguinte (data d){
  if(d.dia+1>diasDoMes(d.mes,d.ano)){
    d.dia=1;
    if(d.mes+1>12){
      d.mes=1;
      d.ano++;
    } else{
      d.mes++;
    }
  } else{
    d.dia++;
  }

  return d;
}

/* Retorna a data correspondente ao dia anterior à data d  */
data diaAnterior (data d){
  if(d.dia-1<1){
    if(d.mes-1<1){
      d.mes=12;
      d.ano--;
    } else{
      d.mes--;
    }
    d.dia=diasDoMes(d.mes,d.ano);
  } else{
    d.dia--;
  }

  return d;
}

/* Retorna a data correspondente a somar k dias à data d (k pode ser negativo)  */
data somaDias (data d, int k) {
  /* a implementar...  */
  /* usar funcoes diaAnterior e diaSeguinte iterativamente  */
  int i;

  if (k>0){
    for (i = 0; i < k; i++){
      d=diaSeguinte(d);
    }
  } else{
    for (i = 0; i < -k; i++){
      d=diaAnterior(d);
    }  
  }
  
  return d;
}

int bissexto(int ano) {
  if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0))
    return 1;
  return 0;
}

int diasDoMes(int mes, int ano) {
   int ndias[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   
   if (bissexto(ano))
     ndias[1]++;
   
   return ndias[mes-1];
}

int dataValida(data d) {
    if (d.ano < 1)
      return 0;
    if (d.mes < 1 || d.mes > 12)
      return 0;
    if (d.dia < 1 || d.dia > diasDoMes(d.mes, d.ano))
      return 0;
    
    return 1;
}

void escreveData(char destino[], data d) {
  char meses[12][10] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"}; 
  sprintf(destino, "%02d de %s de %d", d.dia, meses[d.mes-1], d.ano);
}