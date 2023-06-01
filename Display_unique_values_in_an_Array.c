
#include <stdio.h>

void displayUniqueElements(int arr[], int size) {
    int count;
    int unique[size];
   
    for (int i = 0; i < size; i++) {
        count = 0;

       
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // If the count is 1, the element is unique
        if (count == 1) {
            unique[i] = arr[i];
        } else {
            unique[i] = -1; // Mark repeated elements as -1
        }
    }

  
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (unique[i] != -1) {
            printf("%d ", unique[i]);
            found = 1;
        }
    }

    
    if (!found) {
        printf("-1");
    }
}

int main() {
    int size;
   
    scanf("%d", &size);

    int arr[size];
   
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    displayUniqueElements(arr, size);

    return 0;
}

