// #include <stdio.h>

// int main() {
//     int n, sum = 0;

//     printf("Enter the number of elements you want to enter in the array: ");
//     scanf("%d", &n);

//     int a[n];

//     printf("Enter the elements in sequence:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     printf("The array inserted is:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d\t", a[i]);
//         sum += a[i];   // Correct sum logic
//     }

//     printf("\nSum of array elements = %d\n", sum);
//     int SUM=n*(n-1)/2;
//     printf("The missing element is: %d \n", sum-SUM);
//     return 0;
// }
#include <stdio.h>

int main() {
    int n, sum_expected = 0, sum_actual = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    int a[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
        sum_actual += a[i];
    }

    for (int i = 1; i <= n; i++) {
        sum_expected += i;
    }

    printf("Missing element = %d\n", sum_expected - sum_actual);

    return 0;
}
