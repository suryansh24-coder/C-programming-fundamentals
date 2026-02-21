#include <stdio.h>
#define SIZE 10

int table[SIZE];

void init() {
    for(int i = 0; i < SIZE; i++)
        table[i] = -1;
}

int hash(int key) {
    return key % SIZE;
}

void insert(int key) {
    int index = hash(key);
    while(table[index] != -1) {
        index = (index + 1) % SIZE;
    }
    table[index] = key;
}

int search(int key) {
    int index = hash(key);
    int start = index;

    while(table[index] != -1) {
        if(table[index] == key)
            return index;
        index = (index + 1) % SIZE;
        if(index == start)
            break;
    }
    return -1;
}

void display() {
    for(int i = 0; i < SIZE; i++)
        printf("Index %d : %d\n", i, table[i]);
}

int main() {
    init();

    insert(23);
    insert(43);
    insert(13);
    insert(27);

    display();

    int key = 43;
    int result = search(key);

    if(result != -1)
        printf("\nKey %d found at index %d\n", key, result);
    else
        printf("\nKey not found\n");

    return 0;
}

