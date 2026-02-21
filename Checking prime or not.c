#include<stdio.h>

int main(){
    int num, isprime =0 ;
    printf("Enter your favourable number : \n");
    scanf("%d",&num);
    
    if(num<0){
        isprime=0;
    }
    else if(num==2){
        isprime=1;
    }
    else if(num>=3){
        for(int i=3; i<num/2 ; i++){
            if(num % i == 0){
            isprime=1;
            break ;
            }
        }
    }
    if(isprime==1){
        printf("The number entered is prime! \n");
    }
    else{
        printf("The number entered is not a prime number!\n");
    }
    return 0;
}