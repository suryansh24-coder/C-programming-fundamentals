#include<stdio.h>

 int main(){
  int n,num;
  printf("Enter the no. of elements wants to enter in the array: \n");
  scanf("%d",&n);

  int a[n];
  printf("Enter the %d elements in the array: \n",n);
  for(int i=0 ; i< n ; i++){
    scanf("%d",&a[i]);
  }
  printf("Enter the number want to search : \n");
  scanf("%d",&num);
  int p=0;
  for(int i=0 ; i<n ; i++){
    if(a[i]==num){
     p=1;
     printf("Element found !\n");
     break ;
      }
    else{
        printf("Element not found in the array: \n");
        break;
    }
}
    return 0;
 }