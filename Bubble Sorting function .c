// Writing a C programe to print both teh ascending and descending order :
#include<stdio.h>

void ascend(int a[],int n);
void descend(int a[], int n);

int main(){
    int n,swap,choose;
    printf("Enter the no. of elements you want to add: \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements of the array: \n",n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
   printf("Press 1 for ascending & 2 for descending : \n");
   scanf("%d",&choose);
   if(choose == 1){
    printf("The ascending order is :\n");
    ascend(a,n);
   }
   else if(choose == 2){
    printf("The descending order is : \n");
    descend(a,n);
   }
   else{
    printf("Please read the instructions carefully: \n");
   }
    return 0;
}

 // Ascending bubble sort:-
void ascend(int a[], int n){
    int swap;
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ;j++){
            if(a[j]>a[j+1]){
                swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
            }
        }
    }

    printf("The Sorted array in ascending order is: \n");
    for(int i=0; i<n ;i++){
        printf("%d \t",a[i]);
    }
}
//Descending bubble sort:-
void descend(int a[],int n){
    int swap;
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ;j++){
            if(a[j]<a[j+1]){
                swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
            }
        }
    }

    printf("The Sorted array in descending order is: \n");
    for(int i=0; i<n ;i++){
        printf("%d \t",a[i]);
    }
}