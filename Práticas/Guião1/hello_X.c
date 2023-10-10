#include<stdio.h>

int main(int argc, char* argv[]) {
    char name[30];
    char surname[30];
    printf("What's your first name? "); 
    scanf("%s", name);
    printf("And your surname? "); 
    scanf("%s", surname);

    printf ("Hello, %s %s!\n",name, surname);

    return 0;
}