 #include<stdio.h>

void ascend(int a[] ,int n);
void descend(int a[],int n);

int main(){
     int n , option;
     printf("Enter the no. of elements wants to enter in the array : \n");
     scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements in the array : \n",n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter 1 for ascending and 2 fro descending: \n ");
    scanf("%d",&option);
    if(option == 1){ 
        printf("Ascending order is : \n");
        ascend(a,n);
    }
   else if(option == 2){
        printf("Descending order is :\n");
        descend(a,n);
   }
   else{
    printf("Please read the instruction carefully and then enter here  : \n");
   }
    return 0;
}

void ascend(int a[] ,int n){
    int curr ,prev;
//Insertion sort :-
    for(int i=1 ; i<n ; i++){
        curr =a[i];
        prev = i-1; 
        while(prev >= 0 && a[prev]>curr){
            a[prev+1]=a[prev];
            prev--;
        }
        a[prev +1] = curr ;
    }
    // Printing the sorted array :-
    printf("Your sorted array is :\n");
    for(int i=0 ; i<n ;i++){
        printf("%d \t",a[i]);
    }

}
void descend(int a[],int n){
    int curr ,prev ;
//Insertion sort :-
    for(int i=1 ; i<n ; i++){
        curr =a[i];
        prev = i-1; 
        while(prev >= 0 && a[prev]<curr){
            a[prev+1]=a[prev];
            prev--;
        }
        a[prev +1] = curr ;
    }
    // Printing the sorted array :-
    printf("Your sorted array is :\n");
    for(int i=0 ; i<n ;i++){
        printf("%d \t",a[i]);
    }

}