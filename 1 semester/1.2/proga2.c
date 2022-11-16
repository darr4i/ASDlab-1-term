  #include <stdio.h>
  #include <math.h>
  
  int main()
   {
   int i, n, counter;
   double mult, numenator, denominator;
   
   counter = 0;
  mult = 1;
  
  printf("Please, enter n: ");
  scanf("%d",&n);
  counter += 3; //присвоєння mult, присвоєння n через scanf, присвоєння і
  
  for (i = 1; i <= n; i++){
      counter += 2; //порівняння і та , інкрементуємо і
      denominator = i*i + 1;
      numenator += i + sin(i);
      mult *= numenator/denominator;
      counter += 8; //присвоєння denominator, множення і на і, додавання 1, присвоєння numenator, додавання, синус, присвоєння mult, ділення
  }
  
  printf("Your number is %.7f\n", mult);
  printf("Counter result is %d", counter);
  
  
      return 0;
  }
