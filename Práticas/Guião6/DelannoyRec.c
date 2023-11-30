#include <stdio.h>

int ADDS;
int COMPS;

int Delannoy(int m, int n) {
    if (m == 0 || n == 0) {
        COMPS++;
        return 1;
    }

    ADDS++;
    return Delannoy(m-1,n) + Delannoy(m-1,n-1) + Delannoy(m,n-1);
}

int main() {
    ADDS = 0;
    COMPS = 0;
    printf("%-3s %-3s %-12s %-12s %-12s\n", "M", "N", "Del_Num", "Comps", "Adds");
    for (int i=0 ; i<15 ; i++) {
        int del_num = Delannoy(i,i);
        printf("%-3d %-3d %-12d %-12d %-12d\n", i, i, del_num, COMPS, ADDS);
    }

    return 0;
}
