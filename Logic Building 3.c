// Write a C programe to enter a 6 digit  number and give the output as sum of first and last digit .
    
#include <stdio.h>

int main() {
 int x;
 printf("Enter the six digit  number : ");
 scanf("%d",&x);
  int c1= x%10;
  printf("%d\n",c1);
  
  int c2=(x/100000)%10;
  printf("%d\n",c2);
  
  int sum = c1+c2;
  printf("Sum of first and last digit number: %d\n",sum);
 
    return 0;
}
    