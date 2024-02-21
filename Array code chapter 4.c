#include <stdio.h>
#include <stdlib.h>

#include <time.h>


struct Record {
    int id;

};


void swap(struct Record *a, struct Record *b) {
    struct Record temp = *a;
    *a = *b;
    *b = temp;
}


void bubble_sort(struct Record arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].id > arr[j + 1].id) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {

    srand(time(NULL));


    struct Record records[5];


    for (int i = 0; i < 5; i++) records[i].id = rand() % 100;

    int n = sizeof(records) / sizeof(records[0]);


    printf("Before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", records[i].id);
    }
    printf("\n");


    bubble_sort(records, n);


    printf("After sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", records[i].id);
    }
    printf("\n");

    return 0;
}



