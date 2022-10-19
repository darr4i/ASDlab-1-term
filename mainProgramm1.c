 1  #include <stdio.h>
 2  #include <stdlib.h>
 3  int main() {
 4      float x, y;
 5  
 6      printf("Input x: ");
 7      scanf("%f", &x);
 8  
 9        if(x >= 0){
10            if(x < 7) {
11                y = -6 * x*x + 8;
12                printf(" y = %.2f\n ", y);
13            }
14            else if (x < 11) {
15                    printf("sorry, no value");
16            }
17            else if (x == 7) {
18                    printf("sorry, no value");
19            }
20            else if (x >= 11) {
21                y = -(x*x*x) / 7 + 10;
22                 printf(" y = %.2f\n ", y);
23            }
24        }
25        else {
26            if (x < 0){
27                if (x <= -10){
28                    y = -(x*x*x) / 7 + 10;
29                    printf(" y = %.2f\n ", y);
30                }
31                else if (x > -10){
32                    printf("sorry, no value");
33                }
34            }
35        }
36  
37        return 0;
38    }
