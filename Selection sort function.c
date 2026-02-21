// writing a c programe to sort the array in both ascending and descending order: 
#include<stdio.h>

//function declaration
void ascend(int a[], int n);
void descend(int a[], int n);

int main(){
    int n, opt;
    printf("Enter the no. of elements to be added: \n ");
    scanf("%d",&n);
    // Entering the elements in the array :
    int a[n];
    printf("Enter the %d elements in the array : \n",n);
    for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
    }
    // If else code for options: 
    printf(" Kindly press 1 for ascending and press 2 for descending: \n");
    scanf("%d",&opt);
    if(opt==1){
        printf("The sorted ascending order is :- \n");
        ascend(a,n);
    }
    else if(opt == 2){
        printf("The sorted descending order is :- \n");
        descend(a,n);
    }
    else{
        printf("Kindly read the instruction carefully and then choose : \n");
    }
    return 0;
}

void ascend(int a[], int n){
    int swap,small;
    for(int i=0 ; i< n-1 ; i++){
        small = i ;
        for(int j=i+1; j<n ;j++){
            if(a[j]<a[small]){
                small = j ;
            }
        }
        swap= a[i];
        a[i] =a[small];
        a[small]= swap;
    }
    //Printing the array sorted in an order :-
    printf("Printing the sorted array in ascending order: \n ");
    for(int i=0 ; i<n ; i++){
        printf("%d \t",a[i]);
    }
}
void descend(int a[], int n){
     int swap,small;
    for(int i=0 ; i< n-1 ; i++){
        small = i ;
        for(int j=i+1; j<n ;j++){
            if(a[j]>a[small]){
                small = j ;
            }
        }
        swap= a[i];
        a[i] =a[small];
        a[small]= swap;
    }
    //Printing the array sorted in an order :-
    printf("Printing the sorted array in descending  order: \n ");
    for(int i=0 ; i<n ; i++){
        printf("%d \t",a[i]);
    }
}
