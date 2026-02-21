// Write a C programe to input a five digit number and return the five digit number by adding 1 in each digit and again print it .
#include <stdio.h>

int main() {
 int x;
 printf("Enter the five digit  number : ");
 scanf("%d",&x);
 
 int sum =0;
 int c1=x%10;
 printf("%d\n",c1+1);
 int c2=(x/10)%10;
 printf("%d\n",c2+1);
 int c3=(x/100)%10;
 printf("%d\n",c3+1);
 int c4=(x/1000)%10;
 printf("%d\n",c4+1);
 int c5=(x/10000)%10;
 printf("%d\n",c5+1);
 printf("%d%d%d%d%d\n",c5+1,c4+1,c3+1,c2+1,c1+1);

    return 0;
}