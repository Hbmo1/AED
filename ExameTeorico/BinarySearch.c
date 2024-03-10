#include <stdio.h>

int COMP = 0;

int binary_search(int arr[], int target, int low, int high) {
    while (low <= high) {
        COMP++;
        int mid = (low + high) / 2; //rounded down
        int mid_value = arr[mid];

        if (mid_value == target) {
            return mid;  // Target found
        } else if (mid_value < target) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Target not found
}

int main() {
    int unsorted_array[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
    int array_size = sizeof(unsorted_array) / sizeof(unsorted_array[0]);
    int target_value = 130;

    int result = binary_search(unsorted_array, target_value, 0, array_size - 1);

    if (result != -1) {
        printf("Element %d is present at index %d.\n", target_value, result);
    } else {
        printf("Element %d is not present in the array.\n", target_value);
    }

    printf("Number of comparisons: %d\n", COMP);
    return 0;
}