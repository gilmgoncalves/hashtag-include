/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Programa para gerar palavras chave (aleatórias) com as seguintes características:
* - cada palavra-chave apenas pode conter letras maiúsculas e minúsculas e números
* - as palavras são guardadas em linhas separadas num ficheiro de texto chamado passwords.txt
* - número de palavras-chave a gerar e o seu tamanho devem poder ser definidos como argumentos da linha de comando
*
* Compilar: clang passwords.c -o passwords
* Executar: ./passwords
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXCHARS 50
#define NCHARS 62
char CHARS[] = "abcdefghijklmnopqrstuvxywzABCDEFGHIJKLMNOPQRSTUVXYWZ0123456789";

void geraPasswd(char *, int);

int main(int argc, char *argv[]){
	int i,pwds, len;
	char passwd[MAXCHARS];
	FILE *fout;

	if (argc < 3){	/* número de argumentos é suficiente? */
		fprintf(stderr, "Uso: %s numero tamanho\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	fout = fopen("passwords.txt", "w");
	if (fout == NULL) { 		/* se apontador inválido */
		printf("Impossível criar o ficheiro\n");
		exit(EXIT_FAILURE); 			/* abort */
	}

	pwds=atoi(argv[1]);
	len=atoi(argv[2]);

	for (i=0;i<pwds;i++){
     	geraPasswd(passwd, len);
     	fprintf(fout, "%s\n", passwd);
  }

  fclose(fout);

  return 0;
}


void geraPasswd(char *passwd, int l){
  int i;

  for(i=0;i<l;i++)
    passwd[i]=CHARS[rand()%NCHARS];
  passwd[i]='\0';
}
