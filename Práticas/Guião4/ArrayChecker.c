#include <stdio.h>
#include <assert.h>

// Inicializar a variavel global, em vez de local, embora não recomendável
int nComps;

int f1(int* parray, size_t N) {
    assert(N>2);
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
    int a2[10] = {1,2,1,4,5,6,7,8,9,10};
    int a3[10] = {1,2,1,3,2,6,7,8,9,10};
    int a4[10] = {0,2,2,0,3,3,0,4,4,0};
    int a5[10] = {0,0,0,0,0,0,0,0,0,0};
    size_t N[] = {
        sizeof(a1)/sizeof(a1[0]),
        sizeof(a2)/sizeof(a2[0]),
        sizeof(a3)/sizeof(a3[0]),
        sizeof(a4)/sizeof(a4[0]),
        sizeof(a5)/sizeof(a5[0])
    };

    int* arrays[] = {a1, a2, a3, a4, a5};

    for (int i=0 ; i<5 ; i++) {
        int n_sucess;
        nComps=0;
        n_sucess = f1(arrays[i], N[i]);
        printf("O numero de elementos no array %d que verifica a condição é %d\n", i, n_sucess);
    }

    return 0;
}