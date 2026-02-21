#include <stdio.h>

int main() {
    int rows, colm;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &colm);

    int a[rows][colm];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colm; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colm; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposed Matrix:\n");
    for (int j = 0; j < colm; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int main(){
    int n ,swap;
    printf("Enter the number of elements want to enter in the array:\t");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements in the array :\t",n);
    for(int i=0; i<n ;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            if(a[j]>a[j+1]){
                    swap = a[j];
                    a[j] = a[j+1];
                    a[j+1] = swap ;
            }
        }
    }
    printf("The sorted array is : \t");
    for(int i=0 ;i<n ; i++){
        printf("%d \t",a[i]);
    }
    return 0;
}

int main(){
    int n,small;
    printf("Enter the number of elements wants to enter : \t");
    scanf("%d",&n);

    int a[n];
         printf("Enter the %d elements in the array : \n",n);
            for(int i=0 ; i<n ;i++){
                scanf("%d",&a[i]);
            }
     for(int i=0 ; i<n ;i++){
        small = i ;
        for(int j=i+1 ; j<n ;j++){
           if(a[j]<a[small]){
            small= j;
          }
        }
        int swap = a[small];
        a[small] = a[i]; 
        a[i] =swap;
     }
     printf("The sorted array by selction sort is :\n");
     for(int i=0 ; i<n ; i++){
         printf("%d ",a[i]);
     }
}

int main(){
    int n, prev, curr ; 
    printf("Enter the no of elements wants to enter in the array : \t");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements in the array : \n",n);
    for(int i=0 ; i< n ; i++){
        scanf("%d",&a[i]);
    }

    // insertion sort :
    for(int i=0 ;i< n; i++){
        curr = a[i];
        prev = i-1 ;
        while(prev >=0 && a[prev]>curr){
            a[prev+1]=a[prev] ;
            prev--;
        }
        a[prev+1]=curr;
    }
    printf("The sorted array is :- \t");
    for(int i=0;i<n ;i++){
        printf("%d",a[i]);
    }

    return 0;
}
    
// Linear search :

int main(){
    int n, num;;
    printf("Enter the no. of elements wants to add in the array: \t");
    scanf("%d",&n);
     
    int a[n];
    printf("Enter the %d elements in the array :\n",n);
         for(int i=0 ;i<n ;i++){
            scanf("%d",&a[i]);
         }
     
    printf("Enter the number you want to search :\n");
         scanf("%d",&num);

    for(int i=0 ;i<n ;i++){
        if(a[i] == num){
            printf("Element found !");
            break;
        }
        else if(a[i] != num){
            printf("Elements not found ! \t");
            break;
        }
    }
    return 0;
}
  
int main(){
    int n, num;
    printf("Enter the no of elements wants to enter in the array : \t");
         scanf("%d",&n);
    int a[n];     
         printf("Enter the %d elements in the array : \n",n);
              for(int i=0;i<n;i++){
                 scanf("%d",&a[i]);
                }
    printf("Enter the number want to search :\t");
         scanf("%d",&num);
    int low=0 , heigh = n-1 ,mid ; 
    int found =0;
    
    while(low<=heigh){
        mid= (low+heigh)/2;
        if(a[mid]==num){
            found=1;
        }
        else if(mid<num){
            low = mid+1;
        }
        else{
            heigh = mid- 1;
        }
    }
    if(!found){
        printf("Element not found !\n");
    }
    return 0;
}

#include <stdio.h>

int main() {
    char name[50];

    // Prompt the user
    printf("Enter your name: ");

    // Read input using fgets
    fgets(name, sizeof(name), stdin);

    // Output using puts
    puts("You entered:");
    puts(name);

    return 0;
}
#include<stdio.h>

 int main(){
    int name[100];
    printf("Enter your name : \t");
    fgets(name,sizeof(name),stdin);
    puts("You entered :");
    puts(name);
    printf("The length of the string is : \n",strlen(name));
    return 0;
 }

#include<stdio.h>
#include<string.h>

 typedef struct Engineering student{
      char name[100];
      int age;
      float work_experience;
    }ENGSTU ;
int main(){
    struct student=[3];
    printf("Enter the name :");
    fgets(student, 100,stdin);
    puts(student);

    printf("Enter the age : \t");
    scanf("%d",&s1->age);

    return 0;
}

#include<stdio.h>

int main(){
    FILE*fptr;
    fptr=f.open("Coding.txt","rb");
    if(fptr== NULL){
        printf("File do not exist");
    }
    else{
        f.close(fptr);
    }
    return 0;
}