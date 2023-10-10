#include <stdio.h>

int main() {

    int c;

    // EOF is by default defined as -1 by stdio.h
    // and it can be called in terminal with ctrl + D
    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}