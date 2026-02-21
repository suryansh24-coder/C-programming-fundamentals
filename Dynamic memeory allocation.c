#include<stdio.h>
#include<stdlib.h>
// malloc
int main(){
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
        ptr[0]=1;
        ptr[1]=2;
        ptr[2]=3;
        ptr[3]=4;
        ptr[4]=5;
        //  ptr[5]=6;  if allocated 5 then not use 6 :
         for(int i=0 ; i<5 ; i++){
            printf("%d\n",ptr[i]);
         }
        realloc(ptr,1); 
        for(int i=0 ; i<1 ; i++){
            printf("%d\n",ptr[i]);
         }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    int n;
    printf("Enter the n :\t");
    scanf("%d",&n);

    ptr=(float*)calloc(5,sizeof(float));
       
    for(int i=0; i<=n ; i++){
        printf("%d\n",ptr[i]);
    }

         free(ptr);

    ptr=(float*)calloc(2,sizeof(float));  
            
    for(int i=0; i<=n ; i++){
        printf("%d\n",ptr[i]);
    }
    return 0;
}

//  malloc() - memory allocation , sun - ptr=(int*)(malloc(5*sizeof(int)))
//  calloc() - contigious allocation , ptr=(int*)calloc(5,sizeof(int))
//  realloc() - re allocation ,  ptr=realloc(yuvraj,2);
//  free() - free 
