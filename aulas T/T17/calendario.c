/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Em 1582 o Papa Gregório XIII estabeleceu o calendário moderno (Gregoriano), 
* fixando a seguinte regra dos anos bissextos: são anos bissextos todos os anos
* múltiplos de 4, exceto os múltiplos de 100 mas incluindo os múltiplos de 400. 
* Assim, por exemplo, 1700, 1800 e 1900 não são bissextos, mas 2000, um múltiplo 
* de 400, é bissexto. 
* Escrever um programa que mostre um calendário perpétuo a partir de 1582, 
* tendo em conta que o dia 1 de janeiro de 1582 foi uma sexta-feira.
* Para obtermos o calendário perpétuo precisamos resolver as seguintes tarefas:
* - Determinar se um ano é bissexto
* - Determinar em que dia da semana calha o dia 1 de janeiro do ano
* - Determinar em que dia da semana calha o dia 1 do mês
* - Gerar calendário
*
* Compilar: clang calendario.c -o calendario
* Executar: ./calendario
*/

#include <stdio.h>

int dias_do_mes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

typedef struct 
{
	int dia, mes, ano;
} data;

void wrdata(data d);

void rddia(data* d);

void rdmes(data* d);
   
void rdano(data* d);

void rddata(data* d);

int bissexto(data d);

int nbissextos(data d);

int um_de_janeiro(data d);

int um_de_mes(data d);

void calendario(void);

int main(){
	calendario();
}

void wrdata(data d){
	printf("%2d/%2d/%2d\n", d.dia, d.mes, d.ano);
}

void rddia(data* d){
	do {
		printf("dia ([1,31])? "); 	scanf("%d", &(*d).dia);
	} while ((*d).dia < 1 || (*d).dia > 31);
}

void rdmes(data* d){
	do {
		printf("mes ([1,12])? "); 	scanf("%d", &(*d).mes);
	} while ((*d).mes < 1 || (*d).mes > 12);
}
   
void rdano(data* d){
	do {
		printf("ano (> 1581)? "); 	scanf("%d", &(*d).ano);
	}
	while ((*d).ano < 1582);
}

void rddata(data* d){
	rddia(d);
	rdmes(d);
	rdano(d);
}

int bissexto(data d){
	if(d.ano % 100 == 0){ 
		if (d.ano % 400 == 0)
			return 1;
		else
			return 0;
	}
	if(d.ano % 4 == 0)
			return 1;
		else
			return 0;
}

int nbissextos(data d){
	int nb, seculos, quatrocentos;
	if (d.ano < 1582) return -1;
	nb = (d.ano - 1581)/4;
	seculos = (d.ano - 1501)/100;
	quatrocentos = (d.ano - 1201)/400;
	nb = nb - seculos + quatrocentos;
	return nb;
}


int um_de_janeiro(data d){
	/* 1/1/1582 foi 6.a feira */
	if (d.ano < 1582) return -1;
	return (5 + (d.ano - 1582) + nbissextos(d)) % 7;
}

int um_de_mes(data d){
	int i, primeiro_dia;
	primeiro_dia = um_de_janeiro(d);
	for(i=1; i<d.mes; i++)
		primeiro_dia = primeiro_dia + dias_do_mes[i-1];
	if(d.mes > 2 && bissexto(d)) primeiro_dia++;
	return primeiro_dia % 7;
}

void calendario(void){
	int i, dm, pd, posicao = 0; 
	data d;
	rdano(&d);
	rdmes(&d);
	printf("\n");

	dm = dias_do_mes[(d.mes)-1];
	if(d.mes == 2 && bissexto(d)) dm++;
	pd = um_de_mes(d);
	printf("  D  S  T  Q  Q  S  S\n");
	for(i = 0; i < dm + pd; i++){
		if(i < pd)   printf("   ");
		else  printf("%3d", i-pd+1);
		posicao++;
		if(posicao % 7 == 0) printf("\n");
	}
	printf("\n");
}