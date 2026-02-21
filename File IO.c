// #include<stdio.h>

// int main(){
//     FILE*fptr;
//     fptr=fopen("Struct.txt","r");
//     fgetc(ptr);
//     printf("%c",fgets(ptr));
//     fclose(ptr);
//     return 0;
// }
#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;
    char buffer[100];

    fptr = fopen("Struct.txt", "r");

    if (fptr == NULL) {
        printf("File not found\n");
        return 1;
    }

    ch = fgetc(fptr);
    printf("Character read: %c\n", ch);

    fgets(buffer, 100, fptr);
    printf("Line read: %s", buffer);

    fclose(fptr);
    return 0;
}
