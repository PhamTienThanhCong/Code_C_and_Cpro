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

int dequeue(queue *q){
    int value;
    if (isEmptyQueue(q)){
        value = findNode(q->ll.head,(q->ll.size-1))->mun;
        deleteNode(&(q->ll.head),(q->ll.size-1));
        q->ll.size = q->ll.size - 1;
        return value;
    }
    printf("undefine !");
}

int peek(queue *q){
    int value;
    if (isEmptyQueue(q)){
        value = findNode(q->ll.head,(q->ll.size-1))->mun;
        return value;
    }
    printf("undefine !");
}

int isEmptyQueue(queue *q){
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
    printf("%d\n",dequeue(q));
    printf("%d\n",peek(q));
    printLish(q->ll.head);
}