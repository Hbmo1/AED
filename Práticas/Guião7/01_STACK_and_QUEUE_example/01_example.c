//
// TO DO : desenvolva um algoritmo para verificar se um numero inteiro positivo
//         e uma capicua
//         Exemplos: 12321 e uma capiacua, mas 123456 nao e
//         USE uma PILHA DE INTEIROS (STACK) e uma FILA DE INTEIROS (QUEUE)
//
// TO DO : design an algorithm to check if the digits of a positive decimal
//         integer number constitue a palindrome
//         Examples: 12321 is a palindrome, but 123456 is not
//         USE a STACK of integers and a QUEUE of integers
//

#include <stdio.h>

#include "IntegersQueue.h"
#include "IntegersStack.h"

int Capicua(int num) {

    Stack* s = StackCreate(1000);
    Queue* q = QueueCreate(1000);

    while(num != 0) {
        int a = num % 10;
        num = num /10;

    StackPush(s, a);
    QueueEnqueue(q, a);
    }
    while(!StackIsEmpty(s)) {
        if( StackPop(s) != QueueDequeue(q)) {
            // Not equal
            return 0;
        }
    }
    return 1;
}

int main() {
    int num = 121;
    printf("%d\n", Capicua(num));
    num = 122;
    printf("%d\n", Capicua(num));   
    num = 345222543;
    printf("%d\n", Capicua(num));  
    return 0;

}
