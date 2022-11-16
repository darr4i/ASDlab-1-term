#include <stdio.h>
#include <stdlib.h>
int main() {
float x, y;
  
      printf("Input x: ");
      scanf("%f", &x);
   
         if(x >= 0){
            if(x < 7) {
                y = -6 * x*x + 8;
                printf(" y = %.2f\n ", y);
            }
            else if (x < 11) {
                    printf("sorry, no value");
            }
            else if (x == 7) {
                    printf("sorry, no value");
            }
            else if (x >= 11) {
                y = -(x*x*x) / 7 + 10;
                     printf(" y = %.2f\n ", y);
            }
        }
        else {
            if (x < 0){
                if (x <= -10){
                    y = -(x*x*x) / 7 + 10;
                    printf(" y = %.2f\n ", y);
                }
                else if (x > -10){
                    printf("sorry, no value");
                }
            }
        }
  
        return 0;
    }
