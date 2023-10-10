#include <stdio.h>
#include <assert.h>
int NMUL;
int NDIV;

int IsProgGeom(int* parray, size_t N) {
    int r = parray[1]/parray[0];

    for (int i=1 ; i<N ; i++) {
        NMUL++;
        NDIV++;
        if(!(parray[i] == (r * parray[i-1]))) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a1[10] = {1,2,3,4,5,6,7,8,9,10};
    int a2[10] = {1,2,4,4,5,6,7,8,9,10};
    int a3[10] = {1,2,4,8,5,6,7,8,9,10};
    int a4[10] = {1,2,4,8,16,6,7,8,9,10};
    int a5[10] = {1,2,4,8,16,32,7,8,9,10};
    int a6[10] = {1,2,4,8,16,32,64,8,9,10};
    int a7[10] = {1,2,4,8,16,32,64,128,9,10};
    int a8[10] = {1,2,4,8,16,32,64,128,256,10};
    int a9[10] = {1,2,4,8,16,32,64,128,256,512};
    size_t N[] = {
        sizeof(a1)/sizeof(a1[0]),
        sizeof(a2)/sizeof(a2[0]),
        sizeof(a3)/sizeof(a3[0]),
        sizeof(a4)/sizeof(a4[0]),
        sizeof(a5)/sizeof(a5[0]),
        sizeof(a6)/sizeof(a6[0]),
        sizeof(a7)/sizeof(a7[0]),
        sizeof(a8)/sizeof(a8[0]),
        sizeof(a9)/sizeof(a9[0]),
    };

    int* arrays[] = {a1,a2,a3,a4,a5,a6,a7,a8,a9};

    for(int i=0 ; i<9 ; i++) {
        int test;
        NMUL = 0;
        NDIV = 0;
        test = IsProgGeom(arrays[i], N[i]);
        if (test==1) {
            printf("A sequência de números do array %d constituem uma Prog Geom.\n", i);
            printf("Este teste envolveu %d multiplicações e %d divisões\n", NMUL, NDIV);
        } else {
            printf("A sequência de números do array %d NÃO constituem uma Prog Geom.\n", i);
                        printf("Este teste envolveu %d multiplicações e %d divisões\n", NMUL, NDIV);
        }
    }

    return 0;
}