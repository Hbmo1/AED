#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int upperCounter(char* s, int sLength) {
    int upper = 0;

    for (int i = 0; i < sLength; i++) {
        if (isupper(s[i])) {
            upper++;
        }
    }
    return upper;
}

char* toLower(char* s, int sLength) {
    
    for (int i = 0; i < sLength; i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

int lettersCounter(char* s, int sLength) {
    int letters = 0;

    for (int i = 0; i < sLength; i++) {
        if (isalpha(s[i])) {
            letters++;
        }
    }
    return letters;
}

// Implementation of quicksort algorithm to sort strings
void stringSort(char* s, char** s_sorted) {
    int length = strlen(s);
    char* sorted = strdup(s);

    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (sorted[j + 1] < sorted[j]) {
                char temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
        }
    }

    *s_sorted = sorted;
}

int main(void) {
    char s1[30]; 
    char s2[30];
    printf("Write a string ");
    scanf("%[^\n]%*c", s1);
    printf("Write another string ");
    scanf("%[^\n]%*c", s2);

    printf("String 1: %s\n", s1);
    printf("String 2: %s\n", s2);
    
    int s1Length = strlen(s1);
    int s2Length = strlen(s2);

    printf("S1 has %d letters\n", lettersCounter(s1, s1Length));
    printf("S2 has %d uppercase letters\n", upperCounter(s2, s2Length));

    toLower(s1, s1Length);
    toLower(s2, s2Length);

    printf("%s\n", s1);
    printf("%s\n", s2);

    //strcmp devolve 0 se as strings forem iguais
    if(strcmp(s1,s2) == 0) {
        printf("As strings resultantes são iguais\n");
    } else {
        char* s1_sorted = NULL;
        char* s2_sorted = NULL;
        stringSort(s1, &s1_sorted);
        stringSort(s2, &s2_sorted);
        printf("String 1 por ordem alfabética: %s\n", s1_sorted);
        printf("String 2 por ordem alfabética: %s\n", s2_sorted);  

        free(s1_sorted);
        free(s2_sorted); 
    }

    printf("String 1: %s\n", s1);
    printf("String 2: %s\n", s2);
    // Cópia de s2
    char* s2copy = strdup(s2);
    // Concatenação de s2 com s2copy
    char* s2_plus_s2copy = strcat(s2, s2copy);
    printf("s2 + s2copy: %s\n", s2_plus_s2copy);
    return 0;
}


