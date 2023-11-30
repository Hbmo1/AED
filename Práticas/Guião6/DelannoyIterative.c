#include <stdio.h>

long unsigned int DelannoyDinamico(int m, int n) {
    long unsigned int Delannoy[m+1][n+1];

    for (int i=0 ; i <= m; i++) {
        for (int j=0 ; j<= n ; j++) {
            if (i==0||j==0) {
                Delannoy[i][j] = 1;
            } 
            else {
                Delannoy[i][j] = Delannoy[i-1][j] + Delannoy[i-1][j-1] + Delannoy[i][j-1];            }
        }
    }
    return Delannoy[m][n];
}



int main() {

    printf("%11d %9d %9d %9d %9d %9d %9d %9d %9d %9d %9d %9d %9d %9d %9d %9d %9d %9d\n",0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17);
    for (int i=0 ; i<18; i++) {
        printf("%-10d", i);
        for(int j=0 ; j<18 ; j++) {
            printf("%-10lu", DelannoyDinamico(i,j));
        }
        printf("\n");
    }
    return 0;


}
