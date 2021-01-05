/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo dos espaço em memória ocupado por registos
*
* Compilar: clang pessoa.c -o pessoa
* Executar: ./pessoa
*/

#include <stdio.h> 
#include <string.h>

typedef struct {
  char nome[52];
  int idade;
  float salario;
} pessoa; 

main() 
{
  pessoa x = {"Ana", 35, 1495};

  printf("%d\n", sizeof(pessoa));	/* escreve 60 */ 
  printf("%d\n", sizeof(x));		/* escreve 60 */ 

  strcpy(x.nome, "Ricardo");
  printf("%d\n", sizeof(x));		/* escreve 60 */ 
}
