 1  #include <stdio.h>
 2  #include <stdlib.h>
 3  
 4  int main()
 5  {
 6      float x, y;
 7  
 8      printf("Input x: ");
 9      scanf("%f", &x);
10  
11  
12      if (x >= 0 && x < 7)
13          {
14              y = -6 * x*x + 8;
15              printf(" y = %.2f\n ", y);
16          }
17          else if (x >= 11 || x <= -10 )
18          {
19              y = -(x*x*x) / 7 + 10;
20               printf(" y = %.2f\n ", y);
21          }
22          else if (x >= 7 && x < 11 || -10 < x && x < 0)
23          {
24                  printf("sorry, no value");
25          }
26      return 0;
27  }
