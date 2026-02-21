#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
void pointerBasics();
void pointerAndArray();
void pointerToPointer(int **pp);
void callByReference(int *a, int *b);
int* returnPointer();
void dynamicMemoryDemo();
void pointerWithStructure();

/* Structure definition */
struct Student {
    int id;
    float marks;
};

int main() {
    printf("=== POINTER CONCEPTS IN C ===\n\n");

    pointerBasics();
    pointerAndArray();

    int x = 10;
    int *px = &x;
    pointerToPointer(&px);

    int a = 5, b = 10;
    callByReference(&a, &b);
    printf("After Call by Reference: a = %d, b = %d\n\n", a, b);

    int *retPtr = returnPointer();
    printf("Pointer returned from function: %d\n\n", *retPtr);
    free(retPtr);

    dynamicMemoryDemo();
    pointerWithStructure();

    return 0;
}

/* 1. Basic Pointer Usage */
void pointerBasics() {
    int num = 100;
    int *p = &num;

    printf("Pointer Basics:\n");
    printf("Value of num        : %d\n", num);
    printf("Address of num      : %p\n", &num);
    printf("Value of pointer p  : %p\n", p);
    printf("Value at pointer p  : %d\n\n", *p);
}

/* 2. Pointer with Arrays */
void pointerAndArray() {
    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("Pointer with Array:\n");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d, *(p+%d) = %d\n", i, arr[i], i, *(p + i));
    }
    printf("\n");
}

/* 3. Pointer to Pointer */
void pointerToPointer(int **pp) {
    printf("Pointer to Pointer:\n");
    printf("Value using **pp = %d\n\n", **pp);
}

/* 4. Call by Reference */
void callByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* 5. Returning Pointer from Function */
int* returnPointer() {
    int *p = (int*)malloc(sizeof(int));
    *p = 999;
    return p;
}

/* 6. Dynamic Memory Allocation */
void dynamicMemoryDemo() {
    int n;
    printf("Dynamic Memory Allocation:\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    free(arr);
}

/* 7. Pointer with Structure */
void pointerWithStructure() {
    struct Student s = {101, 89.5};
    struct Student *ps = &s;

    printf("Pointer with Structure:\n");
    printf("ID    : %d\n", ps->id);
    printf("Marks : %.2f\n\n", ps->marks);
}
