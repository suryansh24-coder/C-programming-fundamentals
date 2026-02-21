// Write a C program to calculate the sum of even numbers in an array using a loop.
#include<stdio.h>

int main(){
    int n,sum =0;
    printf("Enter the no of elements want to add : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements in the array : \n",n);
    for(int i=0 ; i<n-1 ; i++){
        scanf("%d",&a[i]);
    }
    //array operation :
    for(int i=1; i<=n ;i++){
          if(a[i]%2==0){
             sum=sum+a[i];
             break;
          }
    }
    printf("The sum of N numbers is :%d \n",sum);
    return 0;
}

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Calculate sum of even numbers
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            sum += a[i];
        }
    }

    printf("The sum of even numbers is: %d\n", sum);

    return 0;
}
