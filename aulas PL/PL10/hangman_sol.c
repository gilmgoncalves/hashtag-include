/*
 * Pretende-se implementar o jogo do Enforcado (Hangman em inglÊs). Para tal deverá
 * usar o ficheiro parcialmente implementado ”hangman.c”e completar as funções em falta.
 * O ficheiro de teste usado  é ”palavras.txt”. As funções a implementar são:
 * 
 *  void carregaPalavras(char *ficheiro, char palavras[][MAX], int *tamanho);
 *  Deve ler as palavras a partir do ficheiro de texto e criar e devolver um vetor de strings. 
 *  O parâmetro tamanho dever ́a ser usado para devolver o tamanho desse vetor.
 * 
 * void revelaLetras(char letra, char *palavra, char *obfuscada);
 * Deve retornar uma nova palavra em que mostra o(s) caracter(es) da palavra obfuscada 
 * indicados pelo parâmetro letra e que estejam presentes na palavra fornecida também
 * como parâmetro.
 * 
 * int joga(char *palavra, char *palavraObfuscada);
 * Implemente a lógica de jogo.
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define TENTATIVAS 6
#define MAX 100

void imprimeForca(int erros);
void carregaPalavras(char *ficheiro, char palavras[][MAX], int *tamanho);
void obfuscaPalavra(char* palavra, char *nova);
int letraNaPalavra(char a, char* palavra);
void revelaLetras(char letra, char *palavra, char *obfuscada);
int vencedor(char *p1, char *p2);
int joga(char *palavra, char *palavra_obfuscada);

int main(){
	char *dados = "palavras.txt";
	char palavras[100][MAX];
	char palavra[MAX], palavra_obfuscada[MAX];
	int i, tamanho, contador;

	srand(time(NULL));

	carregaPalavras(dados, palavras, &tamanho);
	if(tamanho != 0)
	{
		strcpy( palavra, palavras[rand()%tamanho]);
		obfuscaPalavra(palavra, palavra_obfuscada);

		printf("%s\n", palavra_obfuscada);
		contador = joga(palavra,palavra_obfuscada);
		if(contador < TENTATIVAS)
			printf("Parabens!\n");
		else
			printf("Game over... The word was %s\n", palavra);

	}

	return 0;
}

void imprimeForca(int erros)
{
	if (erros == 0)
	{
		printf ("	+------+\n");
		printf ("	 |   |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	============\n");
	}
	else if (erros == 1)
	{
		printf ("	+------+\n");
		printf ("	 |   |\n");
		printf ("	 o   |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	============\n");
	}
	else if (erros == 2)
	{
		printf ("	+------+\n");
		printf ("	 |   |\n");
		printf ("	 o   |\n");
		printf ("	 |   |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	============\n");
	}
	else if (erros == 3)
	{
		printf ("	+------+\n");
		printf ("	 |   |\n");
		printf ("	 o   |\n");
		printf ("	/|   |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	============\n");
	}
	else if (erros == 4)
	{
		printf ("	+------+\n");
		printf ("	 |   |\n");
		printf ("	 o   |\n");
		printf ("	/|\\  |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	============\n");
	}
	else if (erros == 5)
	{
		printf ("	+------+\n");
		printf ("	 |   |\n");
		printf ("	 o   |\n");
		printf ("	/|\\  |\n");
		printf ("	/    |\n");
		printf ("	     |\n");
		printf ("	============\n");
	}
	else if (erros == 6)
	{
		printf ("	+------+\n");
		printf ("	 |   |\n");
		printf ("	 o   |\n");
		printf ("	/|\\  |\n");
		printf ("	/ \\  |\n");
		printf ("	     |\n");
		printf ("	============\n");
	}

}

void carregaPalavras(char *ficheiro, char palavras[][MAX], int *tamanho){
	FILE *fin;
	fin = fopen(ficheiro, "r");
	*tamanho=0;
	while (fscanf(fin, "%s", palavras[*tamanho])==1){
		(*tamanho)++;	
	}
}

void obfuscaPalavra(char* palavra, char *nova)
{
	int i = 0;

	strcpy(nova,palavra);
	while ( nova[i] != '\0' )
	{
		nova[i] = '*';
		i++;
	}
}

int letraNaPalavra(char a, char* palavra)
{
	int i = 0;
	while ( palavra[i] != '\0' )
	{
		if ( palavra[i] == a )
			return 1;
		i++;
	}
	return 0;
}

void revelaLetras(char letra, char *palavra, char *obfuscada){
	int i, n=strlen(palavra);

	for (i = 0; i < n; i++){
		if(palavra[i]==letra) obfuscada[i]=letra;
	}
}

int vencedor(char *p1, char *p2)
{
	if(strcmp(p1,p2)==0)
		return 1;
	else
		return 0;
}

int joga(char *palavra, char *palavra_obfuscada)
{
	int erros=0;
	char letra;

	while (erros < TENTATIVAS){
		printf("\nLetra? ");
		scanf(" %c", &letra);

		if(letraNaPalavra(letra, palavra)){
			revelaLetras(letra, palavra, palavra_obfuscada);
			printf("Boa! \n A palavra é %s\n", palavra_obfuscada);
			if(vencedor(palavra, palavra_obfuscada))
				break;
		} else{
			erros++;
			imprimeForca(erros);
		}
	}
	
	return erros;
}
