#include<stdio.h>

int main(){
    int num,original ,digit ,sum =0;
    printf("Enter the number to be entered  : \n");
    scanf("%d",&num);
   
    original = num ; 
while(num!=0){
    digit =num%10;
    sum=sum+(digit*digit*digit);
    num=num/10;
}
if(sum==original){
    printf("It is a armstrong number.");
}
else{
    printf("It is not an armstrong number.");
}
    return 0;
}