#include <stdio.h>
#include <stdlib.h>

// Display the contents of array a with n elements 
// Pre-Conditions: a != NULL and n > 0 
// Example of produced output: Array = [ 1.00, 2.00, 3.00 ] 
void DisplayArray(double* a, size_t n) {
    if (a != NULL && n > 0) {
        printf("Array = [ ");
        for (int i = 0; i < n-1; i++) {
            printf("%d, ", a[i]);
        }
        printf("%d ]\n", a[n-1]);
    } else {
        printf("Array vazio ou nulo.\n");
    }
} 
// Read the number of elements, allocate the array and read its elements 
// Condition: number of elements > 0 
// Pre-Condition: size_p != NULL 
// Return NULL if memory allocation fails 
// Set *size_p to ZERO if memory allocation fails 
double* ReadArray(size_t* size_p) {
    if (size_p == NULL) {
        return NULL; // Return NULL if size_p is NULL
    }

    size_t numElements;

    printf("Enter the number of elements: ");
    scanf("%zu", &numElements);

    if (numElements <= 0) {
        *size_p = 0; // Set *size_p to ZERO if the number of elements is not greater than zero
        return NULL;
    }

    // Allocate memory for the array
    double* arr = (double*)malloc(numElements * sizeof(double));

    if (arr == NULL) {
        *size_p = 0; // Set *size_p to ZERO if memory allocation fails
        return NULL;
    }

    *size_p = numElements; // Set *size_p to the number of allocated elements

    printf("Enter %zu elements:\n", numElements);
    for (size_t i = 0; i < numElements; i++) {
        scanf("%lf", &arr[i]); // Read each element into the array
    }

    return arr; // Return the pointer to the allocated and filled array
}

// Allocate and return a new array with (size_1 + size_2) elements 
// which stores the elements of array_1 followed by the elements of array_2 
// Pre-Conditions: array_1 != NULL and array_2 != NULL 
// Pre-Conditions: size_1 > 0 and size_2 > 0 
// Return NULL if memory allocation fails 
double* Append(double* array_1, size_t size_1, double* array_2, size_t size_2) {

} 
 
// Test example:    Array = [ 1.00, 2.00, 3.00 ] 
//                  Array = [ 4.00, 5.00, 6.00, 7.00 ] 
//                  Array = [ 1.00, 2.00, 3.00, 4.00, 5.00, 6.00, 7.00 ]

int main() {
    size_t size;
    double* arr = ReadArray(&size);

    if (arr != NULL) {
        printf("Array elements:\n");
        for (size_t i = 0; i < size; i++) {
            printf("%.2lf ", arr[i]);
        }
        printf("\n");

        free(arr); // Don't forget to free the allocated memory when done
    } else {
        printf("Memory allocation failed or zero elements requested.\n");
    }

    return 0;
}