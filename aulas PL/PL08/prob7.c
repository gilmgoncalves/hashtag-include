#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void imprimeTabuleiro(char tabuleiro[LINHAS][COLUNAS]) {


}

int haVencedor(char tabuleiro[LINHAS][COLUNAS]) {
 
 
	return 0;
}

int main() {
	int vencedor = 0;
	int escolha = 0;
	int linha = 0;
	int coluna = 0;
	int i;

	char tabuleiro[LINHAS][COLUNAS] = {
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'}
	};

	for (i = 0; i<9 && !vencedor; i++) {
		int jogador = i%2 + 1;
		imprimeTabuleiro(tabuleiro);

		do {
			printf("\nJogador %d, introduza o numero do quadrado "
				"onde quer colocar o seu %c ",
				jogador,(jogador==1)?'X':'O');
			scanf("%d", &escolha);

			linha = --escolha/3;
			coluna = escolha%3;
		} while(escolha<0 || escolha>9 || tabuleiro [linha][coluna]>'9');

		tabuleiro[linha][coluna] = (jogador == 1) ? 'X' : 'O';
		if (haVencedor(tabuleiro)) { vencedor = jogador; }
	}
	
	imprimeTabuleiro(tabuleiro);

	if(!vencedor) {
		printf("Empate\n");
	} else {
		printf("O Jogador %d venceu\n", vencedor);
	}

	return 0;
}