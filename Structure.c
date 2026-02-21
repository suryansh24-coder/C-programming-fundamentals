// #include<stdio.h>
// #include<string.h>

// typedef struct student{
//     char name[100];
//     int roll;
//     int cgpa;
// }stu;
// int main(){
//   struct student s1;
//   s1.roll=1868;
//   s1.cgpa=9.2;
//   strcpy(s1.name,"Suryansh");

//   printf("Name=%c \n",s1.name);
//   printf("Roll Nummber = %d",s1.roll);
//   printf("CGPA =%d",s1.cgpa);
//     return 0;
// }

#include<stdio.h>
#include<string.h>

struct office{
    char Empname[200];
    int empno;
    float workingyr;
    int empsal;
};

int main(){
  struct office f1;
  printf("Enter the employe name: \n");
  scanf("%c",&f1.Empname);

  printf("Enter the employe enrollment number: \n");
  scanf("%d",&f1.empno);

  printf("Enter the working years: \n");
  scanf("%d",&f1.workingyr);

  printf("Enter teh employe salary: \n");
  scanf("%d",&f1.empsal);

  printf("%d\n",f1.Empname);
  printf("%d\n",f1.empno);
  printf("%d\n",f1.workingyr);
  printf("%d\n",f1.empsal);
    return 0;
}