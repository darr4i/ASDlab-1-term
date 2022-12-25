#include <stdio.h>
#include <windows.h>
#define decrease 1
#define increase -1

int main(){

  const int matrix[7][8] = {
  {9, 2, 3, 8, 7, 6, 4, 7},
  {10, 8, 0, 3, 2, 7, 2, 1},
  {6, 9, 8, 2, 3, 10, 9, 2},
  {5, 3, 1, 10, 9, 5, 3, 0},
  {2, 1, 2, 1, 4, 4, 1, 4},
  {8, 7, 5, 6, 6, 8, 8, 5},
  {1, 10, 6, 7, 1, 1, 5, 8}
  };

  const int raw = 8;
  const int col = 7;
  COORD GetConsoleCursorPosition(HANDLE hConsoleOutput) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
  if(GetConsoleScreenBufferInfo(hConsoleOutput, &csbi)){
    return csbi.dwCursorPosition;
  }else{
    COORD invalid = {0, 0};
    return invalid;
    }
  }
  HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
  void gotoX(int x){
  x += GetConsoleCursorPosition(hout).X;
  COORD pos = {x, GetConsoleCursorPosition(hout).Y};
  SetConsoleCursorPosition(hout, pos);
  }

  void gotoY(int y){
  y += GetConsoleCursorPosition(hout).Y;
  COORD pos = {GetConsoleCursorPosition(hout).X, y};
  SetConsoleCursorPosition(hout, pos);
  }

  void drawMatrix(int matrix[col][raw]){
  printf("\n\n");
  for(int i = 0; i < col; i++){
    for(int j = 0; j < raw; j++){
        gotoX(2);
        printf("%3d", matrix[i][j]);
    }
    printf("\n\n");
  }
  printf("\n");
  }
int sortMatrix(int matrix[col][raw],int direction){
 int hoar(int m[col][raw], int L,int R,int i,int dir){
  int K = L, M = R;

  int T = m[L][i];
  while(L < R){
    while(m[R][i]*direction < T*direction && L < R){
        R--;
    }
    if(L != R){
        m[L][i] = m[R][i];
        L++;
    }
    while (m[L][i]*direction > T*direction && L < R){
        L++;
    }
    if(L != R){
        m[R][i] = m[L][i];
        R--;
    }
  }
    m[L][i] = T;
    int P = L;
    L = K, R = P - 1;

    if(P != L && P != R){
        m = hoar(m, L, R, i, dir);
    }
    L = P + 1;
    R = M;
    if(P != L && P != R){
        m = hoar(m, L, R, i, dir);
    }
    return m;
 }
    for(int i = 0; i < raw; i++){
        matrix = hoar(matrix, 0, col - 1, i, direction);
    }
    return matrix;
  }
  int x = 0;
  while(x != 1 && x !=2 && x !=3){
    printf("Hello!\nChoose the matrix for testing: \n1)original\n2)sorted\n3)reversed-sorted\n");
    scanf("%d", &x);
  }

  switch(x){

  case 1://сортування початкового масиву
      printf("Original matrix:\n");
      drawMatrix(matrix);

     printf("Sorted matrix: \n");
     drawMatrix(sortMatrix(matrix, decrease));
     break;

  case 2://сортування вже відсортованого масиву
      printf("Originally sorted: \n");
      drawMatrix(sortMatrix(matrix, decrease));

      printf("Resorted matrix: \n");
      drawMatrix(sortMatrix(sortMatrix(matrix, decrease), decrease));
      break;

  case 3://сортування оберененого відсортованого масиву
      printf("Reversed-sorted matrix: \n");
      drawMatrix(sortMatrix(matrix, increase));
      printf("Resorted reversed-sorted matrix: \n");
      drawMatrix(sortMatrix(sortMatrix(matrix, increase), decrease));
      break;
  }
    return 0;
}
