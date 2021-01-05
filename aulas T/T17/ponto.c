/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo da utilização de apontadores com registos
*
* Compilar: clang ponto.c -o ponto
* Executar: ./ponto
*/

#include <stdio.h>

typedef struct {
  float x, y;
  } ponto;
  
void lerPonto( ponto *p);
void escreverPonto( ponto p);
  
main(){
  ponto p;
  
  while (1){
    lerPonto(&p);
    if(p.x==0 && p.y==0) break;
    escreverPonto(p);
  }  
}
  
void lerPonto( ponto *p){
    printf("x= "); scanf("%f", &p->x);
    printf("y= "); scanf("%f", &p->y);
  }
  
void escreverPonto( ponto p){
    printf(" (%2.2f, %2.2f) \n", p.x, p.y);
  }