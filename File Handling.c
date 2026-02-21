#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("File Hnadling.txt","r");
    char ch;
    fscanf(fptr , "%c\n",ch);
    fclose(fptr);
    return 0;
}