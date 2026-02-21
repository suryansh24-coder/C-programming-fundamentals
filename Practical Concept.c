#include<stdio.h>

int main(){
    int c=4;
    int *ptr;
    *ptr = &c;
    int **ptr1=&(*ptr);
    printf("%d",&c);
    return 0;  // %u -> unsigned int (hexadecimal value)
               // %p -> human readable 
}