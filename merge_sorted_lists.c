#include <stdio.h>

void mergeSortedLists(int list1[], int size1, int list2[], int size2, int mergedList[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (list1[i] <= list2[j]) {
            mergedList[k++] = list1[i++];
        } else {
            mergedList[k++] = list2[j++];
        }
    }

    while (i < size1) {
        mergedList[k++] = list1[i++];
    }

    // Add remaining elements from list2 (if any)
    while (j < size2) {
        mergedList[k++] = list2[j++];
    }
}

int main() {
    // Sample input arrays
    int list1[] = {1, 3, 5, 7};
    int list2[] = {2, 4, 6, 8};
    int size1 = sizeof(list1) / sizeof(list1[0]);
    int size2 = sizeof(list2) / sizeof(list2[0]);
    int mergedList[size1 + size2];

    // Merge the lists
    mergeSortedLists(list1, size1, list2, size2, mergedList);

    // Print the merged list
    printf("Merged Sorted List: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedList[i]);
    }
    printf("\n");

    return 0;
}

