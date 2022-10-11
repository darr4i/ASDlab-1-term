1  #include <stdio.h>
 2  #include <stdlib.h>
 3  
 4  int main()
 5  {
 6      float x, y;
 7      char q;
 8  
 9      printf("Input x: ");
10      scanf("%f", &x);
11  
12          if(x >= 0 && x < 7) {
13              y = -6 * x*x + 8;
14              printf(" y = %.2f\n ", y);
15          }
16          else if (x >= 7 && x < 11) {
17                  printf("sorry, no value");
18  
19          }
20          else if (x >= 11) {
21              y = -(x*x*x) / 7 + 10;
22               printf(" y = %.2f\n ", y);
23          }
24          else {
25          if (x < 0 && x <= -10 ) {
26              y = -(x*x*x) / 7 + 10;
27               printf(" y = %.2f\n ", y);
28              }
29              else if (-10 < x && x < 0){
30                  printf("sorry, no value");
31              }
32          }
33      return 0;
34  }
