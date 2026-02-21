#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    for(int i=4;i>1;i--){
        for(int j=1;j<=4;j++){
            printf("%c\n",ch);
        }
    }
    return 0;
}