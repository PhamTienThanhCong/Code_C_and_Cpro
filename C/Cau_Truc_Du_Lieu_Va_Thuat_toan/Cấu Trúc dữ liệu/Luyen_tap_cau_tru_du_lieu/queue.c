#include "listNodeFunction.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _linklist
{
    int size;
    listNode *head;
}linklist;

typedef struct _queue
{
    linklist ll;
}queue;

void enqueue(queue *q, int value){
    insertNode(&(q->ll.head),0,value);
    q->ll.size++;
}

int inEmptyQueue(queue *q){
    if (q->ll.size == 0){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    queue *q;
    q = malloc(sizeof(queue));
    q->ll.size=0;
    q->ll.head = NULL;
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    printLish(q->ll.head);
}