#include<stdio.h>

 // Binary Search :-
   int Binarysearch(int a[],int n,int data){
    int l=0, r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(data == a[mid]){
            return mid;
        }
        else if(data<a[mid]){
            r= mid- 1;
        }
        else{
            l= mid+1;
          }
        }
      return -1;  
   }

int main(){
    int n, swap; 
    printf("Enter the no. of elements wants to eneter in the array: \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements int the array: \n", n);
    for(int i=0 ; i< n ;i++){
        scanf("%d",&a[i]);
    }
    // Sorting the array :- 
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j< n-i-1 ; j++){
            if(a[j]>a[j+1]){
                swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap ;
            }
        }
    }
    printf("The Sorted array is :\n");
    for(int i=0; i<n;i++){
        printf("%d \t", a[i]);
    }
    printf("\n");
   // calling binary function : -
   int data,result ; 
   printf("Enter the data to be searched : \n");
   scanf("%d",&data);

   result = Binarysearch(a, n, data);

   if( result != -1){
    printf("Element found at index %d\n", result);
   }
    else{
    printf("Element not found\n");

   } 
    return 0;
}

#include<stdio.h>

int Binarysearch(int a[],int n, int data){
    int l=0, r= n-1; // low , med ,heigh
    while(l<=r){
        int mid = (l+r)/2;
        if(data == a[mid]){ //num
            return mid;
        }
        else if(data < a[mid]){
            r = mid -1; // heigh = mid+ 1
        }
        else{
            l = mid +1 ;
        }
    }
    return -1; 
}
int main(){
  int n, swap;
  printf("Enter the number of elements wants to enter in the array: \n");
  scanf("%d", &n);
  int a[n];
  printf("Enter the %d elements in the array: \n");
  for(int i=0 ;i<n ; i++){
    scanf("%d", &a[i]);
   }
   //Sorting :-
   for(int i=0; i<n-1 ; i++){
    for(int j=0; j < n-i-1 ; j++){
          if(a[j]>a[j+1]){
            swap= a[j];
            a[j] = a[j+1];
            a[j+1] = swap ; 
          }
    }
   }
 // Printing the sorted array : -
 printf("Printing the sorted array : \n");
 for(int i=0 ; i<n ; i++){
    printf("%d \t", a[i]);
 }

 int data , result ; 
 printf("Enter the data to be searched: \n");
 scanf("%d",&data);

 result = Binarysearch(a,n,data) ; 
  if(result != -1 ){
    printf("Element founded in the index %d:\n",result);
  }
  else{
    printf("Element not founded : \n");
  }
    return 0;
}