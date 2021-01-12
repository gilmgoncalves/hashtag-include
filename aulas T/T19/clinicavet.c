/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da uma aplicação de gestão de clientes
*
* Compilar: clang clinicavet.c -o clinicavet
* Executar: ./clinicavetplus
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NUMANIMAIS 150
#define NMX 75
#define TMX 15

typedef struct{
		unsigned int dia, mes, ano;
} data;

typedef struct{
  char nome[NMX];
	data nascimento;
	char tipoanimal[NMX];
	char dono[NMX];
	char telefone[TMX];
} animal;

void menu_opcao(unsigned int *opcao);

void lerAnimal(animal *an);
void listaRegistos(animal animais[], int num);
void ordenaRegistos(animal animais[], int num, int tipo);

int main()
{
  animal clinica[NUMANIMAIS];
  int numRegistos = 0, n;
	unsigned int opcao, fim=0;

	do {
		menu_opcao(&opcao);

		switch (opcao) {
			case 1: lerAnimal(&clinica[numRegistos++]); break;
			case 2: ordenaRegistos(clinica, numRegistos, 1); break;
			case 3: ordenaRegistos(clinica, numRegistos, 2); break;
			case 4: listaRegistos(clinica, numRegistos); break;
			case 5: fim = 1;
		}
	} while(!fim);
}

void menu_opcao(unsigned int *opcao)
{
  do {
		system("clear");

	  printf(" 1 - Introduzir novo animal\n");
	  printf(" 2 - Ordenar alfabeticamente\n");
	  printf(" 3 - Ordenar por data de nascimento\n");
	  printf(" 4 - Listar\n");
	  printf(" 5 - Terminar\n");
		printf(" \n\nOpção: ");

		scanf("%d", opcao);
	} while(*opcao < 1 || *opcao > 5);
}

void listaRegistos(animal animais[], int num)
{
    int i;
    for(i=0; i<num; i++)
      printf("%s %s %s %s\n", animais[i].nome, animais[i].tipoanimal, animais[i].dono, animais[i].telefone);
		getchar();
		printf(" \n\nPrima uma tecla para continuar: ");
		getchar();
}

void lerAnimal(animal *an)
{
	int i=0;
	char straux[50];

	scanf("%s %s %s %s %s", an->nome, an->tipoanimal, an->dono, straux, an->telefone);
	strcat( an->dono, " ");
	strcat( an->dono, straux);
}

void ordenaRegistos(animal animais[], int n, int tipo)
{
	int passo = 0, imin, i;
	animal aux;
	while (passo < n - 1) {
		imin = passo;
		i = passo + 1;
		while (i < n){       /* procura menor */
			if (tipo == 1){
				/* ordena por nome */
				if (strcmp(animais[i].nome, animais[imin].nome)<0) imin = i;
			} else if (tipo == 2){
				/* ordena por data */
				/* falta implementar */
			}
			i++;
		}
		if (imin != passo) { /* troca elementos */
			aux = animais[passo];
			animais[passo] = animais[imin];
			animais[imin] = aux;
			}
		passo++;
	}
}