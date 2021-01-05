/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo de utilização de registos
*
* Compilar: clang datahoje.c -o datahoje
* Executar: ./datahoje
*/

#include <stdio.h>

struct data {
  int ano; 
  int mes;
  int dia;
};

int main(){
  struct data hoje;
  
  hoje.ano = 2021;
  hoje.mes = 1;
  hoje.dia = 5;
  
  printf("Hoje e’ %d/%d/%d.\n", hoje.ano, hoje.mes, hoje.dia ); 

  }