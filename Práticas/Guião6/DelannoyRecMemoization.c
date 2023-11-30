#include <stdio.h>
#include <stdlib.h>

#define SIZE 17

int ADDS;
long int Delannoy_Cache[SIZE][SIZE];

void DelannoyInit() {
    for (int i=0 ; i<SIZE ; i++) {
        for (int j=0 ; j<SIZE ; j++) {
            Delannoy_Cache[i][j] = -1;
        }
    }
}

long unsigned int DelannoyRecMem(int m,int n) {
    if (Delannoy_Cache[m][n] != -1) return Delannoy_Cache[m][n];

    long int r;
    if (m==0 || n==0) {
        r = 1;
    }
    else {
        ADDS++;
        r = DelannoyRecMem(m-1,n) + DelannoyRecMem(m-1, n-1) + DelannoyRecMem(m, n-1);
    }
    Delannoy_Cache[m][n] = r;
    printf("");
    return r;
}

int main() {
    DelannoyInit();
    for (int i=0 ; i<SIZE ; i++) {

    }
}

