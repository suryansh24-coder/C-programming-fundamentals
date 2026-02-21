// Enter a five digit number and give the sum of each number by adding.

#include <stdio.h>

int main() {
 int x;
 printf("Enter the five digit  number : ");
 scanf("%d",&x);
 
 int sum =0;
 int c1=x%10;
 printf("%d\n",c1);
 int c2=(x/10)%10;
 printf("%d\n",c2);
 int c3=(x/100)%10;
 printf("%d\n",c3);
 int c4=(x/1000)%10;
 printf("%d\n",c4);
 int c5=(x/10000)%10;
 printf("%d\n",c5);
 sum = c1+c2+c3+c4+c5;
 printf("%d\n",sum);

    return 0;
}


