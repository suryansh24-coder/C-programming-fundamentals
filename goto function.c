#include<stdio.h>
     /*Write a C program to accept only a positive integer. 
     If the user enters an invalid value, prompt again using goto */
int main(){
     int n;

     input: 
       printf("Enter a number : \t");
       scanf("%d",&n);
     if(n<=0){
        printf("Please enter a positive number :\n");
        goto input;
     }
     printf("Thanks for entering.\n");
     printf("You entered a valid number.\n");

    return 0;
}
 
#include<stdio.h>
// Search for a number in a 2D array. When found, exit both loops immediately using goto.
int main(){
     int a[3][3]={{1,2,3},{8,9,7},{6,5,10}};
     int key;
     printf("Enter the number which is present:\n");
     scanf("%d",&key);
     for(int i=0; i<=3 ;i++){
        for(int j=0; j<=3 ; j++){
            if(a[i][j]==key){
                printf("Element found !\n");
                printf("Position of element : (%d %d) \n",i,j);
                goto found;
            }
        }
     }
     printf("Element not found !\n");
    
     found:
    return 0;
}

#include<stdio.h>
//Create a menu-driven calculator that repeats until the user chooses to exit.
int main(){
    int a,b,ch;
    calculator:
     printf("Enter the operation wants to perform :\n");
     printf("---------------------------------------------\n");
     printf("Enter -01 for addion \n");
     printf("Enter -02 for subtraction \n");
     printf("Enter -03 for divison \n");
     printf("Enter -04 for multiplication \n");
     printf("Enter -05 for exiting \n");
     printf("-----------------------------------------------\n");
     printf("Enter your choice :\t");
              scanf("%d",&ch);
     printf("Enter the respective value of a :\t");
         scanf("%d",&a);
     printf("Enter the respective value of b :\t");
         scanf("%d",&b);
              if(ch==1){
                  printf("The sum is :%d\n", a+b);
                  goto calculator;
                }
              else if(ch==2){
                   printf("The difference is : %d\n",a-b);
                   goto calculator;
                }
              else if(ch==3){
                   printf("The divison is : %d\n",a/b);
                   goto calculator;
                }
              else if(ch==4){
                   printf("The multiplication is : %d\n",a*b);
                   goto calculator;
                }
              else if(ch==5){
                  printf("Thank you for using, Hope enjoy services ! \n");
                  goto end;
              }
              else{
                printf("Enter a valid input !\n");
              }
        goto calculator ;
        end :       
          printf("Programe terminated ! \n");
     return 0;
}

#include<stdio.h>
      // Allow the user 3 attempts to enter the correct password using goto
    int main(){
      int oldPW = 1234568;
      int userPW;
      password:
    
            printf("Enter the new password: \t");
              scanf("%d",&userPW);  
      if(oldPW==userPW){
        printf("Password matched succesful !\n");
      } 
      else if(oldPW!=userPW){
        printf("Inavlid password input ! \n");
        goto password;
      }
      else("Try again unknown error!\n");
     return 0;    
    }