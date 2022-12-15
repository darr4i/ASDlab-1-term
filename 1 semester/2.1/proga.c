Текст програми :
#include <stdio.h>
#include <stdlib.h>

int main()
{
   float matrix[7][8] = {
   {5, 4.9, 4.7, 3.2, 2.8, 2, 1, 1},
   {5, 5, 4.3, 4, 3, 2.9, 2.3, 1},
   {4.9, 4.3, 4, 4, 3.7, 3.3, 3, 1},
   {5, 4, 3, 2, 2, 2, 1, 1},
   {5, 5, 5, 4.7, 4, 3.8, 2.2, 1},
   {5, 4.7, 3.5, 2.6, 1.9, 1.5, 1.3, 1},
   {5, 4.4, 3.5, 3.1, 3, 2.1, 1.5, 1}
   };

   float searchNumber = 0;
   printf("Enter your number: ");
   scanf("%e", &searchNumber);

   int matrixLength = sizeof(matrix[0]) / sizeof(matrix[0][0]);
   int j = -1, i = 0;
   for(i; i < 7; i++){
    int L = 0, R = matrixLength - 1;
     while(L < R){
        int middleIndex = (L + R)/2;
        float middle = matrix[i][middleIndex];
        if(searchNumber < middle){
           L = middleIndex + 1;
        } else{
           R = middleIndex;
        }
     }
      if(R == L && matrix[i][R] == searchNumber && matrix[i][L] == searchNumber){
         j = L;
      }
      if (j != -1){
        break;
      }
     }
      if (j != -1){
        printf("row: %d; column: %d", i, j);
      } else {
          printf("no such element in matrix");
      }
    return 0;
}

