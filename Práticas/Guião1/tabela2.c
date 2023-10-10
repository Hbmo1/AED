#include<stdio.h>
#include<math.h>

int main (void) {
    double count = 1;
    double ang;

    printf("%5s %13s %10s\n", "ang", "sin(ang)", "cos(ang)");
    printf("%7s %10s %10s\n", "------", "------", "------");

    while(count < 50) {
        ang = count * 5;
        printf("%6.2f %10.2f %10.2f\n", ang, sin(ang), cos(ang));

        count++;
    }

    return 0;
}