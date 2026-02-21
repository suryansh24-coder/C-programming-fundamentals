// Write a C programe to enter a five digit number and take input from the user and add the enter the digit want to add in each digit.
   
#include <stdio.h>

int main() {
 int x;
 printf("-----------------------------------------\n");
 printf("Enter the five digit  number : ");
 scanf("%d",&x);
 printf("-----------------------------------------\n");
 int a,b,c,d,e;
 int sum =0;
 printf("---------------------------------------------------\n"); 
 printf("Enter the number want to add in fifth place(0-9) : \n");
 scanf("%d",&a);
  printf("--------------------------------------------------\n");
 int c1=x%10;
 printf("%d\n",c1+a);
  printf("---------------------------------------------------\n");
 printf("Enter the number want to add in fourth place(0-9) : \n");
 scanf("%d",&b);
  printf("---------------------------------------------------\n");
 int c2=(x/10)%10;
 printf("%d\n",c2+b);
  printf("---------------------------------------------------\n");
 printf("Enter the number want to add in third place (0-9): \n");
 scanf("%d",&c);
  printf("----------------------------------------------------\n");
 int c3=(x/100)%10;
 printf("%d\n",c3+c);
  printf("---------------------------------------------------\n");
 printf("Enter the number want to add in second place(0-9) : \n");
 scanf("%d",&d);
  printf("---------------------------------------------------\n");
 printf("Enter the number want to add in first place (0-9): \n");
 scanf("%d",&d);
  printf("---------------------------------------------------\n");
 int c4=(x/1000)%10;
 printf("%d\n",c4+d);
  printf("--------------------------------------------------\n");
 printf("Enter the number want to add in first place(0-9) : \n");
 scanf("%d",&e);
  printf("--------------------------------------------------\n");
 int c5=(x/10000)%10;
 printf("%d\n",c5+e);
  printf("-------------------------------------------------\n");
 printf("%d%d%d%d%d\n",c5+a,c4+b,c3+c,c2+d,c1+e);
 printf("-------------------------------------------------------\n");
    return 0;
}


