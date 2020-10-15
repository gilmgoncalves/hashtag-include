/* #include
*
* MIECC - FEUP / PROG1 - EEC005
*
* Programa em C que resolve sudoku
*
* Compilar: clang sudoku.c -o sudoku
* Executar: ./sudoku < sudoku_game.txt
*/

#include <stdio.h>
#include <stdlib.h>

int isAvailable(int puzzle[][9], int row, int col, int num){
    int rowStart = (row/3) * 3;
    int colStart = (col/3) * 3;
    int i, j;

    for(i=0; i<9; ++i){
        if (puzzle[row][i] == num) return 0;
        if (puzzle[i][col] == num) return 0;
        if (puzzle[rowStart + (i%3)][colStart + (i/3)] == num) return 0;
    }
    return 1;
}

int fillSudoku(int puzzle[][9], int row, int col){
    int i;
    if(row<9 && col<9){
        if(puzzle[row][col] != 0){
            if((col+1)<9) return fillSudoku(puzzle, row, col+1);
            else if((row+1)<9) return fillSudoku(puzzle, row+1, 0);
            else return 1;
        }
        else{
            for(i=0; i<9; ++i){
                if(isAvailable(puzzle, row, col, i+1)){
                    puzzle[row][col] = i+1;
                    if((col+1)<9){
                        if(fillSudoku(puzzle, row, col +1)) return 1;
                        else puzzle[row][col] = 0;
                    }
                    else if((row+1)<9){
                        if(fillSudoku(puzzle, row+1, 0)) return 1;
                        else puzzle[row][col] = 0;
                    }
                    else return 1;
                }
            }
        }
        return 0;
    }
    else return 1;
}

void display(int puzzle[][9]){
    int row, column;
    printf("THE SOLVED SUDOKU \n");
    for(row=0;row<9;row++){
        for(column=0;column<9;column++)
            printf("%d ",puzzle[row][column]);

        printf("\n");
    }
}

int main(){
    int i, j;
    int puzzle[9][9];

    printf("Enter the desired sudoku and enter 0 on the empty spaces\n");
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            scanf("%d",&puzzle[i][j]);

    if(fillSudoku(puzzle, 0, 0))
        display(puzzle);
    else
        printf("\n\nNO SOLUTION\n\n");

    return 0;
}