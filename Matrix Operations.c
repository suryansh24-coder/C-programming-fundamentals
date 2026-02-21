#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of rows (m): ");
    scanf("%d", &m);

    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    int arr[m][n];

    /* Input matrix elements */
    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    /* Print matrix */
    printf("The matrix entered is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include<stdio.h>

int main(){
    int m,n;
    printf("Enter the dimensions(m): \t");
    scanf("%d",&m);
    printf("Enter the dimensions(n): \t");
    scanf("%d",&n);

    int a[m][n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // printing the element;
    printf("The inseretd matrix is :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    // Transpose of a matrix :-
    printf("The trasposed matrix is :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d \t",a[j][i]);
        }
        printf("\n");
    }


    return 0;
}