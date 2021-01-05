/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo da utilização de tipos de dados enumerados
*
* Compilar: clang semana.c -o semana
* Executar: ./semana
*/

#include <stdio.h>

enum semana { domingo, segunda, terca, quarta, quinta, sexta, sabado};

int main(){
    enum semana hoje;
    hoje = segunda;
    printf("Dia %d\n", hoje + 1);
}