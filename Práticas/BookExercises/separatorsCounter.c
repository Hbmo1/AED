#include <stdio.h>

int main() {

    int c, nl, nb, nt;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            nl++;
        }
        else if (c == ' ') {
            nb++;
        }
        else if (c == '\t') {
            nt++;
        }
    }

    printf("Blanks: %d ; NewLines: %d ; Tabs: %d\n", nb, nl, nt);
} 