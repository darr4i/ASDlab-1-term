  #include <stdio.h>
   #include <math.h>
   
   int main(){
   
   int n, i, j, counter;
   double mult, numenator, denominator;
   
   counter = 0;
  mult = 1;
  counter++ ; // присвоєення mult
  
  printf("Please, enter n: ");
  scanf("%d",&n);
  counter += 2; // присвоєння n через scanf, присвоєння і
  
  
   for (i = 1; i <= n; i++){
          counter += 2; // порівнюємо і та n, інкрементуємо і
          numenator = 0;
          denominator = i*i + 1;
          counter += 5; // присвоєння numenator та denominator , множення і на і, додавання 1,нова ітерація
          counter++; //присвоєння j
      for (j = 1; j <= i; j++){
          counter += 3; //порівняння j та і, інкрементуємо j, нова ітерація
          numenator += j + sin(j);
          counter += 3; // присовєння, додавання, синус
      }
   mult *= numenator/denominator;
   counter += 2; //присвоєння та ділення
   }
  
  printf("Your result is %.7f\n", mult);
  printf("Counter result is %d", counter);
  
  return 0;
  }
  
