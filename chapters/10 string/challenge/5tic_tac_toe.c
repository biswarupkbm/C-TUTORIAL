#include<stdio.h>

int main(){
  char  board[3][3] = {{'x','o','o'}, {'o','x','o'}, {'o','o','x'}};

  printf("showing tic-tac-toe board\n");
  printf("%c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
  printf("---------\n");

  printf("%c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
  printf("---------\n");

  printf("%c | %c | %c\n", board[2][0], board[2][1], board[2][2]);

  // method 2

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      printf("%c", board[i][j]);
      if(j<2) printf(" | ");
    }
    // printf("\n");
    if(i<2) printf("\n---------\n");
  }

  return 0;
}