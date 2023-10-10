#include<stdio.h>
#include<math.h>

int main (void) {
    double count = 1;
    double n;

    printf("%5s %10s %10s\n", "Num", "Sqrt", "Squared");

    while(count < 10) {
        n = count;
        printf("%5f %10f %10f\n", n, sqrt(n), n*n);

        count++;
    }

    return 0;
}