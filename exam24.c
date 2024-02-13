#include<stdio.h>
main() {
 int num,sum; 

 scanf ("%d", &num);
 sum = 0;
 do {
  sum += num % 10; 
  num /= 10; 
 } while (num > 0);
 printf ("%d \n",sum);

}