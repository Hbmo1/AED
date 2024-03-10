#include <stdio.h>
#include <stdlib.h>

int COMP = 0;
int ITER = 0;
int ASSIGN = 0;
int RETURN = 0;

#define RAND_MAX = 500;

int LinearSearch(int* parray, int size, int b) {
    int i; 
    ASSIGN++;
    // Loop through the array
    for (i=0 ; i < size; i++) {
        ASSIGN++;
        COMP++;
        ITER++;

        
        if (parray[i] == b) {
            // If a smaller number is found, set b to that number
            RETURN++;
            return i;

        }
        COMP++;
    }
    RETURN++;
    return 0;
}

int main() {
    int size = 70;
    int array[size];
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
        printf("%d\n", array[i]);
    }
    int* parray = array;
    int index = LinearSearch(parray, size, (rand() % 100));
    printf("%d\n", index);

    printf("COMP: %d\n", COMP);
    printf("ITER: %d\n", ITER);
    printf("ASSIGN: %d\n", ASSIGN);
    printf("RETURN: %d\n", RETURN);

    return 0;
}





