#include <stdio.h>
#include "./01_STACK_and_QUEUE_example/IntegersQueue.h"
#include "./01_STACK_and_QUEUE_example/IntegersStack.h"

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