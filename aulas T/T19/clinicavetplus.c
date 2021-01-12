/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da uma aplicação de gestão de clientes
* utilização de ficheiros para garantir a persistência da informação
*
* Compilar: clang clinicavetplus.c -o clinicavetplus
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
void carregaTexto(animal animais[], int *num);
void gravaTexto(animal animais[], int num);
void carregaBin(animal animais[], int *num);
void gravaBin(animal animais[], int num);

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
			case 5: carregaTexto(clinica, &numRegistos); break;
			case 6: gravaTexto(clinica, numRegistos); break;
			case 7: carregaBin(clinica, &numRegistos); break;
			case 8: gravaBin(clinica, numRegistos); break;
			case 9: fim = 1;
		}
	} while(!fim);
}

void menu_opcao(unsigned int *opcao)
{
  do{
	  system("clear");

	  printf(" 1 - Introduzir novo animal\n");
	  printf(" 2 - Ordenar alfabeticamente\n");
	  printf(" 3 - Ordenar por data de nascimento\n");
	  printf(" 4 - Listar\n");
	  printf(" 5 - Carregar (texto)\n");
	  printf(" 6 - Gravar (texto)\n");
	  printf(" 7 - Carregar (bin)\n");
	  printf(" 8 - Gravar (bin)\n");
	  printf(" 9 - Terminar\n");
	  printf(" \n\nOpção: ");
	  scanf("%d", opcao);
	}while(*opcao < 1 || *opcao > 9);
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

	printf("Introduza animal (nome, tipo, dono, telefone)\n");
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

void carregaTexto(animal animais[], int *num){
  FILE *fin;
  int i=0;
  char nomefic[TMX], straux[50];

  printf("indique o nome do ficheiro: ");
  scanf("%s", nomefic);

  fin = fopen(nomefic, "r");

  if(fin != NULL){
		while(fscanf(fin, "%s %s %s %s %s", animais[i].nome, animais[i].tipoanimal, animais[i].dono, straux, animais[i].telefone)!=EOF){
			strcat( animais[i].dono, " ");
			strcat( animais[i].dono, straux);
			i++;
		}
    fclose(fin);
		*num=i;
  }
  else{
		printf("Impossível abrir ficheiro!\n");
		getchar();
		printf(" \n\nPrima uma tecla para continuar: ");
		getchar();
	}

}

void gravaTexto(animal animais[], int num){
  FILE *fout;
  int i;
  char nomefic[TMX];

  printf("indique o nome do ficheiro: ");
  scanf("%s", nomefic);

  fout = fopen(nomefic, "w");

  if(fout != NULL){
		for(i=0; i<num; i++)
      fprintf(fout, "%s %s %s %s\n", animais[i].nome, animais[i].tipoanimal, animais[i].dono, animais[i].telefone);
    fclose(fout);
  }
  else
    printf("Impossível gravar!\n");
}


void carregaBin(animal animais[], int *num){
  FILE *fin;
  char nomefic[TMX];
  int n, i;

  printf("indique o nome do ficheiro: ");
  scanf("%s", nomefic);

  fin = fopen(nomefic, "rb");

  if(fin != NULL){
    fseek(fin,0, SEEK_END);
    n = ftell(fin);
    n = n/sizeof(animal);
		rewind(fin);

		fread(animais, sizeof(animal), n, fin);

		fclose(fin);
		*num = n;
	}
	else
		printf("Impossível abrir ficheiro!\n");
}

void gravaBin(animal animais[], int num){
  FILE *fout;
  int i;
  char nomefic[TMX];

  printf("indique o nome do ficheiro: ");
  scanf("%s", nomefic);

  fout = fopen(nomefic, "wb");

  if(fout != NULL){
		fwrite(animais, sizeof(animal), num, fout);
    fclose(fout);
  }
  else
    printf("Impossível gravar!\n");
}
