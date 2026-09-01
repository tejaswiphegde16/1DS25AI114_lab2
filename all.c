#include <stdio.h>

int main() {
    // Array capacity is 20 to safely allow insertions, current size is 10
    int a[20] = {1, 21, 43, 54, 45, 96, 17, 38, 29, 10};
    int size = 10;

    // 1. Traversal
    printf("--- Array Traversal ---\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d is %d\n", i, a[i]);
    }

    // 2. Search
    printf("\n--- Search ---\n");
    int val = 54;
    for (int i = 0; i < size; i++) {
        if (a[i] == val) {
            printf("Element %d found at index %d\n", val, i);
        }
    }

    // 3. Max and Min
    printf("\n--- Max and Min ---\n");
    int max = a[0];
    int min = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    // 4. Sum of all elements
    printf("\n--- Sum of Elements ---\n");
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    printf("Sum = %d\n", sum);

    // 5. Insertion at Beginning
    printf("\n--- Insertion at Beginning ---\n");
    int numb = 12;
    for (int i = size; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = numb;
    size++; // Increase size after insertion
    for (int i = 0; i < size; i++) {
        printf("Element %d is %d\n", i, a[i]);
    }

    // 6. Insertion at Specific Index (e.g., index 3)
    printf("\n--- Insertion at Index 3 ---\n");
    int nump = 14;
    int pos = 3;
    for (int i = size; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = nump;
    size++; // Increase size
    for (int i = 0; i < size; i++) {
        printf("Element %d is %d\n", i, a[i]);
    }

    // 7. Insertion at End
    printf("\n--- Insertion at End ---\n");
    int nume = 4578;
    a[size] = nume;
    size++; // Increase size
    for (int i = 0; i < size; i++) {
        printf("Element %d is %d\n", i, a[i]);
    }

    // 8. Deletion at Beginning
    printf("\n--- Deletion at Beginning ---\n");
    for (int i = 0; i < size - 1; i++) {
        a[i] = a[i + 1];
    }
    size--; // Decrease size
    for (int i = 0; i < size; i++) {
        printf("Element %d is %d\n", i, a[i]);
    }

    // 9. Deletion at Specific Index (e.g., index 4)
    printf("\n--- Deletion at Index 4 ---\n");
    int posd = 4;
    if (posd >= 0 && posd < size) {
        for (int i = posd; i < size - 1; i++) {
            a[i] = a[i + 1];
        }
        size--; // Decrease size
    }
    for (int i = 0; i < size; i++) {
        printf("Element %d is %d\n", i, a[i]);
    }

    // 10. Deletion at End
    printf("\n--- Deletion at End ---\n");
    if (size > 0) {
        size--; // Simply decrement size to remove the last element
    }
    for (int i = 0; i < size; i++) {
        printf("Element %d is %d\n", i, a[i]);
    }

    return 0;
}
