#include <stdio.h>

// A function to perform linear search
int linear_search(int arr[], int n, int x) {
    // Traversing in the array
    for(int i = 0; i < n; i++) {
        // Best Case: Element is found at the first position (i == 0)
        if(arr[i] == x) {
            return i; // Element found
        }
    }
    // Worst Case: Element is not found after checking all elements
    return -1;
}

int main() {
    // Initializing the array
    int arr[5] = {4, 2, 7, 5, 10};
    int target;
    
    // Asking the user for the target element
    printf("Enter Element for linear search: ");
    scanf("%d", &target);

    // Calling the linear_search function
    int index = linear_search(arr, 5, target);

    // Checking the result
    if(index != -1) {
        printf("Element is found at index %d\n", index);
        /*  Best Case Example:
            Input: 4 -> Found at index 0 (First element)

            Average Case Example:
            Input: 7 -> Found at index 2 (Middle element)
        */
    } else {
        printf("Element is not found\n");
        /*  Worst Case Example:
            Input: 9 -> Not present in the array
        */
    }

    return 0;
}
