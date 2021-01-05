/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo de registos em registos
*
* Compilar: clang funcionario.c -o funcionario
* Executar: ./funcionario
*/

#include <stdio.h>

typedef struct { 
  int dia, mes, ano; 
} data; 

typedef struct { 
  char proprio[20]; 
  char apelido[3][15]; 
} nome; 

typedef struct {
  nome id;
  int idade;
  data entrada;
  float salario;
} funcionario; 

void escreve_data(data d) {
  printf("%2d/%2d/%2d\n", d.dia, d.mes, d.ano);
}

void escreve_nome(nome n) {
  printf("%s %s %s %s\n", n.proprio, n.apelido[0], n.apelido[1], n.apelido[2]);
}

void escreve_funcionario(funcionario f) {
  escreve_nome(f.id); 
  printf("Idade: %2d\n", f.idade);
  printf("Data de entrada: "); escreve_data(f.entrada);
  printf("Ordenado: %6.f\n", f.salario);
}

main() {
  funcionario f = {{"Rui", "Abreu", "Silva", ""}, 35, {10, 2, 2000}, 1100};
  escreve_funcionario(f);
}