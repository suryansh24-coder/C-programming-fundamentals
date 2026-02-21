// #include <stdio.h>

// int main(){
//     int n,x,count=0;
//     printf("Enter the number of element in an array :");
//     scanf("%d",&n);

//     int arr[n];
//     printf("Enter %d elements in the array\n",n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
   
//     printf("Enter the element to be count:\n");
//     scanf("%d",&x);
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             count++;
//         }
//     }
//     printf("Elements %d occurs %d times",x,count);
//     return 0;
// }

#include<stdio.h>

int main(){
int x,n,pos;
printf("Enter the number of elements in the array:");
scanf("%d",&n);

int arr[n];
printf("Enter the %d elements in the array\n",n);
for(int i=0; i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Enter the element which you want to add on : \n");
scanf("%d",&x);
printf("Enter the position at which you want to add the new element:\n");
scanf("%d",&pos);
for(int i=0;i<pos;i--){
    arr[i]=arr[1-i];
    scanf("%d",&arr[x]);
}

printf("Your new array: %d\t",arr[in]);
    return 0;
}