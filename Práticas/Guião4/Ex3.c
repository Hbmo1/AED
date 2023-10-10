#include <stdio.h>
#include <assert.h>

int NCOMPS;

// CORRIGIR N SUCCESSES(?) ACho que está bem afinal

int f3(int* parray, size_t N) {
    int n_success = 0;

    for (int i= 0 ; i<=N-3 ; i++) {
        for (int j= i+1 ; j<=N-2 ; j++) {
            for (int k = j+1 ; k<=N-1 ; k++) {
                NCOMPS++;
                if (parray[k] == parray[i] + parray[j]) {
                    n_success++;
                }
            }
        }
    }
    return n_success;
}

int main() {
    int a1[10] = {1,2,3,4,5,6,7,8,9,10};
    int a2[10] = {1,2,1,4,5,6,7,8,9,10};
    int a3[10] = {1,2,1,3,2,6,7,8,9,10};
    int a4[10] = {0,2,2,0,3,3,0,4,4,0};
    int a5[10] = {0,0,0,0,0,0,0,0,0,0};
    int a6[5] = {3, 7, 1, 1, 2};
    int a7[10] = {2,3,3,4,1,5,6,2,0,1};
    int a8[20] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};
    int a9[30] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};
    int a10[40] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};
    int a11[80] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};

    size_t N[] = {
        sizeof(a1)/sizeof(a1[0]),
        sizeof(a2)/sizeof(a2[0]),
        sizeof(a3)/sizeof(a3[0]),
        sizeof(a4)/sizeof(a4[0]),
        sizeof(a5)/sizeof(a5[0]),
        sizeof(a6)/sizeof(a6[0]),
        sizeof(a7)/sizeof(a7[0]),
        sizeof(a8)/sizeof(a8[0]),
        sizeof(a9)/sizeof(a9[0]),
        sizeof(a10)/sizeof(a10[0]),
        sizeof(a11)/sizeof(a11[0])
    };
    
    int* arrays[] = {a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11};
    int n_success;

    for (int i=0 ; i<11 ; i++) {
        NCOMPS = 0;
        n_success = f3(arrays[i], N[i]);
        printf("A sequência %d, com %ld elementos, fez %d comparações e teve %d sucessos.\n", i, N[i], NCOMPS, n_success);
    }   

    return 0;
}