#include <stdio.h>

int N1;
int N2;
int N3;

int f1(int n) {
    if (n == 1) {
        return 1;
    }
    N1++;
    return n + f1(n/2);
}

int f2(int n) {
    if (n == 1) {
        return 1;
    }
    N2++;
    N2++;
    return n + f2((n+1)/2) + f2(n/2);
}

int f3(int n) {
    if (n == 1) {
        return 1;
    }

    if (n%2 == 0) {
        N3++;
        return n + 2 * f3(n/2);
    } 
    N3+=2;
    return n + f3((n+1)/2) + f3(n/2);
}

int main() {
    for(int i = 1; i <= 15 ; i++) {
        N1 = 0;
        N2 = 0;
        N3 = 0;
        int f1_ret = f1(i);
        int f2_ret = f2(i);
        int f3_ret = f3(i);
        printf("N= %3d F1= %3d N1= %3d | ", i, f1_ret, N1);
        printf("F2= %3d N2= %3d | ", f2_ret, N2);
        printf("F3= %3d N3= %3d\n", f3_ret, N3);
    }   
}

