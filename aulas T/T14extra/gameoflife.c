/* #include 
*
*  MIECC - FEUP / PROG1 - EEC005
*
* The universe of the Game of Life is an infinite two-dimensional orthogonal grid of square cells, each of which is in one of two possible states, 
* alive or dead, or "populated" or "unpopulated" (the difference may seem minor, except when viewing it as an early model of human/urban behavior 
* simulation or how one views a blank space on a grid).
* Every cell interacts with its eight neighbours, which are the cells that are horizontally, vertically, or diagonally adjacent. At each step in time,
* the following transitions occur:
* - any live cell with fewer than two live neighbours dies, as if caused by under-population.
* - any live cell with two or three live neighbours lives on to the next generation.
* - any live cell with more than three live neighbours dies, as if by over-population.
* - any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.
* The initial pattern constitutes the seed of the system. 
* The first generation is created by applying the above rules simultaneously to every cell in the seed - births and deaths occur simultaneously,
* and the discrete moment at which this happens is sometimes called a "tick" (in other words, each generation is a pure function of the preceding one).
* The rules continue to be applied repeatedly to create further generations.
*
* Compilar: clang gameoflife.c -o gameoflife
* Executar: ./gameoflife
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define N 15
#define M 40

#define SEEDS 200

void desenha_universo(int mat[][M]){
  int i, j;
  for(i=0; i<N; i++){
    for(j=0; j<M; j++)
      if(mat[i][j] == 0)
        printf(".");
      else
        printf("*");
    printf("\n");
  }
}

/* incrementa o indíce da linha de modo a ser circular */
int linha_inc (int i, int a){
	i += a;
	while (i < 0) i += M;
	while (i >= M) i -= M;
	return i;
}

/* incrementa o indíce da coluna de modo a ser circular */
int coluna_inc (int i, int a){
	i += a;
	while (i < 0) i += N;
	while (i >= N) i -= N;
	return i;
}

/* determina valor da célula; lida com limites do universo */
int valor_celula(int mat[][M], int i, int j){
  if(i>=0 && i<N && j>=0 && j<M)
    return mat[i][j];
  return 0;
}

/* conta número de células vizinhas vivas */
int vizinhos_vivos(int mat[][M], int i, int j){
  int di, dj, n=0;
  for(di=-1; di<=1; di++)
    for(dj=-1; dj<=1; dj++)
      if(di !=0 || dj != 0)
        n += valor_celula(mat, linha_inc(i, di), coluna_inc(j, dj));
  return n;
}

/* determina próximo estado da célula */
int proxima_celula(int mat[][M], int i, int j){
  int n_vivos;

  n_vivos = vizinhos_vivos(mat, i, j);
  if(mat[i][j] == 1){ /* se celula viva */
    if(n_vivos < 2 || n_vivos > 3)
      return 0;
    return 1;
  }
  else if(n_vivos == 3)
    return 1;
  return 0;
}

/* cria próxima geração como função da atual */
void proxima_geracao(int mat[][M]){
  int i, j, new_mat[N][M];

/* regista alterações num mundo auxiliar */
  for(i=0; i<N; i++)
    for(j=0; j<M; j++)
      new_mat[i][j] = proxima_celula(mat, i, j);

/* copia para o mundo original */
  for(i=0; i<N; i++)
    for(j=0; j<M; j++)
      mat[i][j]=new_mat[i][j];
}

int main(){
  int i, universo[N][M] = {0};
  srand(time(NULL));

  /* gera algumas celulas vivas */
  for(i=0; i<SEEDS; i++)
    universo[rand()%N][rand()%M] = 1;

 /* ciclo infinito */
  while(1){
    system("clear");
    desenha_universo(universo);
    usleep(50000);
    proxima_geracao(universo);
  }

  return 0;
}
