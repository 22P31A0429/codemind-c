#include <stdio.h>

int findHighestUnique(int arr[], int size) {
    int count[1000001] = {0}; // Assuming the maximum element in the array is 1000000

    // Count the occurrences of each element in the array
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    // Find the highest unique element
    int highestUnique = -1;
    for (int i = 0; i < size; i++) {
        if (count[arr[i]] == 1 && arr[i] > highestUnique) {
            highestUnique = arr[i];
        }
    }

    return highestUnique;
}

int main() {
    int size; // printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
  
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int highestUnique = findHighestUnique(arr, size);
    printf("%d", highestUnique);

    return 0;
}
