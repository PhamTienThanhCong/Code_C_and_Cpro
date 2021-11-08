#include <stdlib.h>
#include <stdio.h>
#include "lishNode.h"

typedef struct _stack{
    listNode *head;
}stack;

void pust(stack *s, int value){
    insertNode(&(s->head),0,value);
}

int isEmtyStack(stack *s){
    if (s->head == NULL){
        return 0;
    }
    else{
        return 1;
    }
}

int pop(stack *s){
    if (isEmtyStack(s) != 0){
        int value;
        value = findNode((s->head),0)->mun;
        deleteNode(&(s->head),0);
        return value;
    }
    printf("defined !!!");
}

int peek(stack *s){
    if (isEmtyStack(s) != 0){
        int value;
        value = findNode((s->head),0)->mun;
        return value;
    }
    printf("defined !!!");
}

int main(){
    stack *s;
    s = malloc(sizeof(stack));
    s->head = NULL;
    pust(s,1);
    pust(s,2);
    pust(s,3);
    printf("%d\n",pop(s));
    printf("%d\n",peek(s));
    printLish(s->head);
}