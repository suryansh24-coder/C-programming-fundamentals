/* Concepts of DSA : Sorting Techniques - Bubble sort
                                        - Selection sort
                                        - Insertion sort
                                        */
//Bubble sorting algorithum:- 

#include<stdio.h>

 int main(){
   int n,swap;
    printf("Enter the number of elements to be added : \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements of the array :-\n",n);
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]);
    } 
    // bubble sort
     for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            if(a[j]>a[j+1]){
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
     }
     // Printing sorted array : 
     printf("Sorted array:\n");
     for(int i=0;i<=n;i++){
        printf("%d \t",a[i]);
     }
    return 0 ;
 }

#include <stdio.h>

int main(){
    // Descending order: 
       int n,swap;
    printf("Enter the number of elements to be added : \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements of the array :-\n",n);
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]);
    } 
    // bubble sort
     for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            if(a[j]>a[j+1]){
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
     }
     // Printing sorted array : 
     printf("Sorted array:\n");
     for(int i=n ;i<=0 ;i++){
        printf("%d \t",a[i]);
     }
    return 0;
}

// Selection sorting algorithum :-

#include <stdio.h>

int main() {
    int n, swap, small;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        small = i; 
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[small]) {
                small = j;
            }
        }
        // Swap after finding smallest
        swap = a[small];
        a[small] = a[i];
        a[i] = swap;
    }

    // Printing sorted array
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}

// Insertion sorting algorithum :-

#include<stdio.h>

  int main(){
    int n,curr,prev;
    printf("Enter the no. of elements you want : \n");
    scanf("%d",&n);
   // Entering the array :
    int a[n];
    printf("Enter the %d elements :\n",n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
  // insertion sort
  for(int i=0 ; i<n ; i++){
    curr=a[i];
    prev= i-1;
    while(prev >=0 && a[prev]>curr){
        a[prev+1]=a[prev];
        prev--;
    }
    a[prev+1]=curr ;
  }
  // Printing the sorted array :
  printf("The soretd array is : \n");
  for(int i=0 ; i<n ; i++ ){
    printf("%d \t",a[i]);
  }
    return 0;
  }

// Bubble sort : (Ascending order)
#include<stdio.h>

int main(){
    int n,swap;
    printf("Enter the no. of elements you want to add : \n");
    scanf("%d",&n);

    //Entering the element in the array :
    int a[n];
    printf("Enter the %d elements of the array: \n",n);
    for(int i=0 ; i<n ; i++){
      scanf("%d",&a[i]);
   }

   // Bubble sorting:-
   for(int i=0 ; i<n-1 ; i++){
    for(int j=0 ; j<n-i-1 ; j++){
        if(a[j]>a[j+1]){
            swap = a[j];
            a[j] = a[j+1];
            a[j+1] = swap ;
     
        }
     }
   }
   // printing the sorted array:(Ascending order)
   printf("The Sorted array is: \n");
   for(int i=0 ; i<n ; i++){
    printf("%d \t",a[i]);
   }
    return 0;
}

// Bubble sort : (Descending order)
#include<stdio.h>

int main(){
    int n,swap;
    printf("Enter the no. of elements you want to add : \n");
    scanf("%d",&n);

    //Entering the element in the array :
    int a[n];
    printf("Enter the %d elements of the array: \n",n);
    for(int i=0 ; i<n ; i++){
      scanf("%d",&a[i]);
   }

   // Bubble sorting:-
   for(int i=0 ; i<n-1 ; i++){
    for(int j=0 ; j<n-i-1 ; j++){
        if(a[j]<a[j+1]){
            swap = a[j];
            a[j] = a[j+1];
            a[j+1] = swap ;
     
        }
     }
   }
   // printing the sorted array:(Descending order)
   printf("The Sorted array is: \n");
   for(int i=0 ; i<n ; i++){
    printf("%d \t",a[i]);
   }
    return 0;
}

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

// Selection sort function :-
#include<stdio.h>

int main(){
    int n,swap ,small;
    printf("Enter the no. of elements want to add in the array: \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements in the array: \n",n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0 ; i<n -1 ; i++){
        small = i;
        for( int j = i+1 ; j<n ; j++){
            if(a[j]>a[small]){
                small = j;
            }
        
                swap = a[j];
                a[j] = a[small];
                a[small] = swap ;
        }
    }

    //Printing the sorted array:
    printf("The sorted array is :-\n");
    for(int i=0 ; i<n ;i++){
        printf("%d \t",a[i]);
    }
    return 0;
}

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
 // Insertion sort:-
#include<stdio.h>

int main(){
     int n ,curr ,prev;
     printf("Enter the no. of elements wants to enter in the array : \n");
     scanf("%d",&n);
    int a[n];
    printf("Enter the %d elements in the array : \n",n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    //Insertion sort :-
    for(int i=1 ; i<n ; i++){
        curr =a[i];
        prev = i-1; 
        while(prev >=0 && a[prev]>curr){
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

    return 0;
}
// C programe for both ascending and descending order : 
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
    

    // Insertion Sort :
    #include<stdio.h>
 
    int main(){
        int n ,curr ,prev;
        printf("Enter the no. of elements to be entered in the array : \n");
        scanf("%d",&n);
        int a[n];
        printf("Enter the %d elements in the array : \n",n);
        for(int i=0 ; i< n ; i++){
            scanf("%d",&a[i]);
        }

        // insertion sort ; 
        for (int i =1 ; i< n ; i++){
            curr = a[i];
            prev = i+1 ;
            while ( prev >=0 && a[prev]>curr ){
                a[prev +1]=a[prev] ;
                prev -- ;
            }
            a[prev]=curr ;
        }
        // Printing the sorted array :-
    printf("Your sorted array is :\n");
    for(int i=0 ; i<n ;i++){
        printf("%d \t",a[i]);
    }
        return 0;
    }
