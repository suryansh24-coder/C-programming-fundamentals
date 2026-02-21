#include<stdio.h>

int main(){
    float area,circumference, r;
    printf("Enter the radius of the circle: \n");
    scanf("%f",&r);
    area = 3.14*r *r;
    printf("Area is : %f\n", area);
    circumference = 2*3.14*r ;
    printf("Circumference is : %f \n",circumference);

    float p,r,t ,si;
    printf("Enter the principal amount : \t");
    scanf("%f", &p);
    printf("Enter the rate of intrest: \t");
    scanf("%f",&r);
    printf("Enter the time period / duration \t");
    scanf("%f", &t);
    si=(p*r*t)/100;
    printf("Your Simple Intrest is : %f",si);
    return 0;
    float c,f;
    printf("Enter the temperature in degree celcius: \t");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("Your temperature in fahrenheit is: %f",f);
      
    int a,b,temp;
    printf("Enter the first value A:");
    scanf("%d",&a);
    printf("Enter the seconf value B:");
    scanf("%d",&b);
    printf("A=%d \n B=%d \n", a,b);
    temp =a;
    a=b;
    b=temp;
    printf("---------------------------------\n");
    printf("The new swapped values are :-\n");
    printf("A is : %d\n",a);
    printf("B is : %d\n",b);
   
    int x,y;
    printf("Enter the first value :\t");
    scanf("%d",&x);
    printf("Enter the second value :\t ");
    scanf("%d",&y);
    if(x==y){
        printf("Numbers are equal !\n");
    }
    else{
        printf("Numbers are not equal:-\n");
    }
    int x,y,z;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    printf("Enter the value of z:");
    scanf("%d",&z);
    if(x>y && x>z){
        printf("X is Greatest !\n");
    }
    else if (y>x && y>z){
        printf("Y is the Greatest !\n");
    }
    else{
        printf("Z is the Greatest !\n");
    }
    int year;
    printf("Enter year: ");
    if (scanf("%d", &year)!=1) 
      return 0;
    int leap = (year%4==0 && year%100!=0) || (year%400==0);
    if (leap) printf("%d is a leap year.\n", year);
    else printf("%d is not a leap year.\n", year);
    return 0;
    int a,b,c,d,e, percentage, total, grade;
    printf("Enter the marks of subject 01: \t");
    scanf("%d",&a);
    printf("Enter the marks of subject 02: \t");
    scanf("%d",&b);
    printf("Enter the marks of subject 03: \t");
    scanf("%d",&c);
    printf("Enter the marks of subject 04: \t");
    scanf("%d",&d);
    printf("Enter the marks of subject 05: \t");
    scanf("%d",&e);
    total= (a+b+c+d+e);
    percentage = total/5;
    printf("Your percentage is: %d\n",percentage);
if(percentage>=100 && percentage<90){
    printf("As per your percentage you got A grade , congratulation !");
}
else if (percentage<=100 && percentage>80){
    printf("As per your percentage you got B grade , congratulation !");
}
else if (percentage<=80 && percentage>60){
    printf("As per your percentage you got C grade , congratulation !");
}
else {
    printf("As per your percentage you got D grade , Need Improvement !");

}
}
int cal ,a,b;
printf("Enter the first value A: ");
scanf("%d",&a);
printf("Enter the second value B: ");
scanf("%d",&b);
printf("---------------------------------------\n");
printf("Enter your choice of operation : \n");
printf("01. Enter 1 for Addition.\n");
printf("02. Enter 2 for Subtraction.\n");
printf("03. Enter 3 for Multiplication.\n");
printf("04. Enter 4 for Divison.\n");
printf("05. Enter 5 for Remainer.\n");
printf("06. Enter 6 to exit.\n");
scanf("%d",&cal);
switch(cal){
    case 1: printf("Addition is : %d", a+b);
            break;
    case 2: printf("Subrtarction is :%d",a-b);
            break ;
    case 3: printf("Multiplication is : %d", a*b);
            break ;
    case 4: printf("Divison is : %d",a/b);
            break;
    case 5: printf("Remianer is : %d",a%b);
            break;
    default : printf("Unknown Operator beyonf the limits !\n");
            break;
            return 0; 
}
int n,sumodd,sumeven,OE;
printf("Enter the value of N:\t");
scanf("%d",&n);
sumodd=0;
sumeven=0;
printf("Enter 1 for sum of odd numbers \n");
printf("----------------------------------------\n");
printf("Enter 2 for sum of even numbers \n");
scanf("%d",&OE);
if(OE==1){
    for(int i=1; i<=n ; i++){
      if(i%2!=0){
          sumodd=sumodd+i;
       }
     }
    printf("Sum of odd numbers is: %d",sumodd);
}
else if(OE==2){
    for(int i=1;i<=n;i++){
        if(i%2==0){
        sumeven=sumeven+i;
       }
    }
    printf("Sum of even numbers is: %d",sumeven);
}
int x;
printf("Enter the number for which you want factorial: \t");
scanf("%d",&x);
int fact=1;
if(x<0){
    printf("Factorial doesn't exist.\n");
}
else{
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    printf("Factorial of %d number is : %d",x,fact);
 }
 return 0;
}
#include<stdio.h>
int fib();

int main(){
    return 0;
}

int fib(){

}
#include <stdio.h>

// Function to print Fibonacci Series
void fibonacci(int n) {
    int a = 0, b = 1, c, i;

    printf("Fibonacci Series: %d %d ", a, b);

    for(i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main() {
    int num;

    printf("Enter number of terms: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("Enter a valid number!");
    } else if (num == 1) {
        printf("Fibonacci Series: 0");
    } else {
        fibonacci(num);
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter number: ");
    if (scanf("%d", &n)!=1) return 0;
    if (n <= 1) { printf("Not prime\n"); return 0; }
    for (int i=2;i<= (int)sqrt(n); i++) {
        if (n % i == 0) { printf("Not prime\n"); return 0; }
    }
    printf("Prime\n");
    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    for (int n=1;n<=100;n++) {
        int x = n, sum = 0;
        int digits = (n<10)?1: (n<100)?2: (int)log10(n)+1;
        while (x) {
            int d = x%10;
            sum += (int)pow(d, digits);
            x/=10;
        }
        if (sum == n) printf("%d\n", n);
    }
    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate Armstrong sum
    while (originalNum != 0
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Counting number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Armstrong calculation
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int bin_to_dec(const char *s) {
//     int res = 0;
//     for (int i=0; s[i]; i++) {
//         res = res*2 + (s[i]-'0');
//     }
//     return res;
// }

// void dec_to_bin(int n, char *buf, int bufsize) {
//     if (n==0) { strcpy(buf,"0"); return; }
//     buf[bufsize-1]='\0';
//     int idx = bufsize-2;
//     while (n>0 && idx>=0) {
//         buf[idx--] = (n%2) + '0';
//         n/=2;
//     }
//     strcpy(buf, buf+idx+1);
// }

// int main() {
//     int choice;
//     printf("1: Binary to Decimal, 2: Decimal to Binary: ");
//     if (scanf("%d", &choice)!=1) return 0;
//     if (choice==1) {
//         char bin[65];
//         printf("Enter binary string: ");
//         if (scanf("%s", bin)!=1) return 0;
//         printf("Decimal = %d\n", bin_to_dec(bin));
//     } else if (choice==2) {
//         int dec;
//         printf("Enter decimal: ");
//         if (scanf("%d", &dec)!=1) return 0;
//         char buf[65];
//         dec_to_bin(dec, buf, sizeof(buf));
//         printf("Binary = %s\n", buf);
//     } else printf("Invalid choice\n");
//     return 0;
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int bin_to_dec(const char *s) {
    int res = 0;
//     for (int i = 0; s[i]; i++) {
//         res = res * 2 + (s[i] - '0');
//     }
//     return res;
// }

// void dec_to_bin(int n, char *buf, int bufsize) {
//     if (n == 0) {
//         strcpy(buf, "0");
//         return;
//     }
//     buf[bufsize - 1] = '\0';
//     int idx = bufsize - 2;
//     while (n > 0 && idx >= 0) {
//         buf[idx--] = (n % 2) + '0';
//         n /= 2;
//     }
//     strcpy(buf, buf + idx + 1);
// }

// int main() {
//     int choice;
//     printf("1: Binary to Decimal, 2: Decimal to Binary: ");
    
//     if (scanf("%d", &choice) != 1) return 0;

//     if (choice == 1) {
//         char bin[65];
//         printf("Enter binary string: ");
//         if (scanf("%s", bin) != 1) return 0;
//         printf("Decimal = %d\n", bin_to_dec(bin));
//     } 
//     else if (choice == 2) {
//         int dec;
//         printf("Enter decimal: ");
//         if (scanf("%d", &dec) != 1) return 0;
//         char buf
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int bin_to_dec(const char *s) {
//     int res = 0;
//     for (int i = 0; s[i]; i++) {
//         res = res * 2 + (s[i] - '0');
//     }
//     return res;
// }

// void dec_to_bin(int n, char *buf, int bufsize) {
//     if (n == 0) {
//         strcpy(buf, "0");
//         return;
//     }
//     buf[bufsize - 1] = '\0';
//     int idx = bufsize - 2;
//     while (n > 0 && idx >= 0) {
//         buf[idx--] = (n % 2) + '0';
//         n /= 2;
//     }
//     strcpy(buf, buf + idx + 1);
// }

// int main() {
//     int choice;
//     printf("1: Binary to Decimal, 2: Decimal to Binary: ");
    
//     if (scanf("%d", &choice) != 1) return 0;

//     if (choice == 1) {
//         char bin[65];
//         printf("Enter binary string: ");
//         if (scanf("%s", bin) != 1) return 0;
//         printf("Decimal = %d\n", bin_to_dec(bin));
//     } 
//     else if (choice == 2) {
//         int dec;
//         printf("Enter decimal: ");
//         if (scanf("%d", &dec) != 1) return 0;
//         char buf[65];
//         dec_to_bin(dec, buf, sizeof(buf));
//         printf("Binary = %s\n", buf);
//     } 
//     else {
//         printf("Invalid choice\n");
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n;
//     printf("Enter size: ");
//     if (scanf("%d", &n)!=1) return 0;
//     int *a = malloc(n * sizeof(int));
//     int *b = malloc(n * sizeof(int));
//     int *c = malloc(n * sizeof(int));
//     if (!a || !b || !c) return 0;
//     printf("Enter elements of first array: ");
//     for (int i=0;i<n;i++) scanf("%d", &a[i]);
//     printf("Enter elements of second array: ");
//     for (int i=0;i<n;i++) scanf("%d", &b[i]);
//     for (int i=0;i<n;i++) c[i] = a[i] + b[i];
//     printf("Result array: ");
//     for (int i=0;i<n;i++) printf("%d ", c[i]);
//     printf("\n");
//     free(a); free(b); free(c);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n, key;
//     printf("Enter size: ");
//     if (scanf("%d", &n)!=1) return 0;
//     int *a = malloc(n * sizeof(int));
//     printf("Enter elements: ");
//     for (int i=0;i<n;i++) scanf("%d", &a[i]);
//     printf("Enter key: ");
//     if (scanf("%d", &key)!=1) { free(a); return 0; }
//     int found = -1;
//     for (int i=0;i<n;i++) if (a[i]==key) { found = i; break; }
//     if (found>=0) printf("Found at index %d\n", found);
//     else printf("Not found\n");
//     free(a);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter n: ");
//     if (scanf("%d", &n)!=1) return 0;
//     int a[n];
//     printf("Enter elements: ");
//     for (int i=0;i<n;i++) scanf("%d", &a[i]);
//     for (int i=0;i<n-1;i++) {
//         for (int j=0;j<n-1-i;j++) {
//             if (a[j] > a[j+1]) {
//                 int t = a[j]; a[j]=a[j+1]; a[j+1]=t;
//             }
//         }
//     }
//     printf("Sorted: ");
//     for (int i=0;i<n;i++) printf("%d ", a[i]);
//     printf("\n");
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int r1,c1,r2,c2;
//     printf("Enter rows and cols of matrix A: ");
//     if (scanf("%d %d", &r1, &c1)!=2) return 0;
//     printf("Enter rows and cols of matrix B: ");
//     if (scanf("%d %d", &r2, &c2)!=2) return 0;
//     if (r1!=r2 || c1!=c2) {
//         printf("For addition, dimensions must be same.\n");
//     } else {
//         int **A = malloc(r1*sizeof(int*));
//         int **B = malloc(r1*sizeof(int*));
//         int **S = malloc(r1*sizeof(int*));
//         for (int i=0;i<r1;i++){
//             A[i]=malloc(c1*sizeof(int));
//             B[i]=malloc(c1*sizeof(int));
//             S[i]=malloc(c1*sizeof(int));
//         }
//         printf("Enter matrix A:\n");
//         for (int i=0;i<r1;i++) for (int j=0;j<c1;j++) scanf("%d",&A[i][j]);
//         printf("Enter matrix B:\n");
//         for (int i=0;i<r1;i++) for (int j=0;j<c1;j++) scanf("%d",&B[i][j]);
//         printf("Sum matrix:\n");
//         for (int i=0;i<r1;i++){
//             for (int j=0;j<c1;j++){
//                 S[i][j] = A[i][j] + B[i][j];
//                 printf("%d ", S[i][j]);
//             }
//             printf("\n");
//         }
//         for (int i=0;i<r1;i++){ free(A[i]); free(B[i]); free(S[i]); }
//         free(A); free(B); free(S);
//     }
//     if (c1 != r2) {
//         printf("Cannot multiply: columns of A must equal rows of B.\n");
//     } else {
//         int **A = malloc(r1*sizeof(int*));
//         int **B = malloc(r2*sizeof(int*));
//         int **P = malloc(r1*sizeof(int*));
//         for (int i=0;i<r1;i++){ A[i]=malloc(c1*sizeof(int)); P[i]=malloc(c2*sizeof(int)); }
//         for (int i=0;i<r2;i++) B[i]=malloc(c2*sizeof(int));
//         printf("Enter matrix A for multiplication:\n");
//         for (int i=0;i<r1;i++) for (int j=0;j<c1;j++) scanf("%d",&A[i][j]);
//         printf("Enter matrix B for multiplication:\n");
//         for (int i=0;i<r2;i++) for (int j=0;j<c2;j++) scanf("%d",&B[i][j]);
//         for (int i=0;i<r1;i++){
//             for (int j=0;j<c2;j++){
//                 P[i][j] = 0;
//                 for (int k=0;k<c1;k++) P[i][j] += A[i][k]*B[k][j];
//             }
//         }
//         printf("Product matrix:\n");
//         for (int i=0;i<r1;i++){
//             for (int j=0;j<c2;j++) printf("%d ", P[i][j]);
//             printf("\n");
//         }
//         for (int i=0;i<r1;i++){ free(A[i]); free(P[i]); }
//         for (int i=0;i<r2;i++) free(B[i]);
//         free(A); free(B); free(P);
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int r,c;
//     printf("Enter rows and cols: ");
//     if (scanf("%d %d", &r, &c)!=2) return 0;
//     int a[r][c];
//     printf("Enter matrix:\n");
//     for (int i=0;i<r;i++) for (int j=0;j<c;j++) scanf("%d",&a[i][j]);
//     printf("Transpose:\n");
//     for (int j=0;j<c;j++){
//         for (int i=0;i<r;i++) printf("%d ", a[i][j]);
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int r,c;
//     printf("Enter rows and cols: ");
//     if (scanf("%d %d", &r, &c)!=2) return 0;
//     int a[r][c];
//     printf("Enter matrix:\n");
//     for (int i=0;i<r;i++) for (int j=0;j<c;j++) scanf("%d",&a[i][j]);
//     int sum = 0;
//     int n = (r<c)?r:c;
//     for (int i=0;i<n;i++) sum += a[i][i];
//     printf("Sum of main diagonal = %d\n", sum);
//     return 0;
// }
// #include <stdio.h>

// size_t my_strlen(const char *s) {
//     const char *p = s;
//     while (*p) p++;
//     return (size_t)(p - s);
// }

// char *my_strcpy(char *dest, const char *src) {
//     char *d = dest;
//     while ((*d++ = *src++));
//     return dest;
// }

// char *my_strcat(char *dest, const char *src) {
//     char *d = dest;
//     while (*d) d++;
//     while ((*d++ = *src++));
//     return dest;
// }

// int my_strcmp(const char *s1, const char *s2) {
//     while (*s1 && (*s1 == *s2)) { s1++; s2++; }
//     return (unsigned char)*s1 - (unsigned char)*s2;
// }

// int main() {
//     char s1[200], s2[100];
//     printf("Enter s1: ");
//     if (scanf("%199s", s1)!=1) return 0;
//     printf("Enter s2: ");
//     if (scanf("%99s", s2)!=1) return 0;
//     printf("strlen(s1) = %zu\n", my_strlen(s1));
//     char copy[200];
//     my_strcpy(copy, s1);
//     printf("copy = %s\n", copy);
// // //    
// #include <stdio.h>
// #define SQR(x) ((x)*(x))

// int main() {
//     int n;
//     printf("Enter number: ");
//     if (scanf("%d", &n)!=1) return 0;
//     printf("Square = %d\n", SQR(n));
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main() {
//     char filename[200], word[100];
//     printf("Enter filename: ");
//     if (scanf("%199s", filename)!=1) return 0;
//     printf("Enter word to search: ");
//     if (scanf("%99s", word)!=1) return 0;
//     FILE *f = fopen(filename, "r");
//     if (!f) { printf("Cannot open file\n"); return 0; }
//     int count = 0;
//     char buf[1024];
//     size_t wlen = strlen(word);
//     while (fscanf(f, " %1023s", buf) == 1) {
//         if (strcmp(buf, word) == 0) count++;
//     }
//     if (count>0) printf("Word '%s' found %d times\n", word, count);
//     else printf("Word '%s' not found\n", word);
//     fclose(f);
//     return 0;
// }
