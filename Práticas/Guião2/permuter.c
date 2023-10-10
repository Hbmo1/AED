#include <stdio.h>

void permute(int *a, int *b, int *c) {

    int temp1 = *a;
    int temp2 = *b;
    *a = *c;
    *b = temp2;
    *c = temp1;
}

int main(void) {

    int x = 1;
    int y = 2;
    int z = 3;

    permute(&x, &y, &z);
    printf("Valores permutados:\n a=%d\n b=%d\n c=%d\n", x,y,z);

    return 0;
}