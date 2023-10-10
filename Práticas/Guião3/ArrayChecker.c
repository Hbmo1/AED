#include <stdio.h>


// Inicializar a variavel global, em vez de local, embora não recomendável
int nComps;

int f1(int* parray, size_t N) {
    int nelem = 0;
    nComps = 0;

    for (int i=1 ; i<N-1 ; i++) {
        nComps++;
        if (parray[i] == parray[i-1] + parray[i+1]) {
            nelem++;
        }
    }
    return nelem;
}

int main() {
    int a1[10] = {1,2,3,4,5,6,7,8,9,10};
    size_t N1 = sizeof(a1);
    int a2[10] = {1,2,1,4,5,6,7,8,9,10};
    size_t N2 = sizeof(a2);
    int a3[10] = {1,2,1,3,2,6,7,8,9,10};
    size_t N3 = sizeof(a3);
    int a4[10] = {0,2,2,0,3,3,0,4,4,0};
    size_t N4 = sizeof(a4);
    int a5[10] = {0,0,0,0,0,0,0,0,0,0};
    size_t N5 = sizeof(a5);

    printf("O array a1 tem %d elementos que estão de acordo com a regra"), a1, f1(a1,N1);

    return 0;
}