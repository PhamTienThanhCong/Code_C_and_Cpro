#include <stdio.h>
#include <stdlib.h>
#include "listNodeFunction.h"

int main()
{
    listNode *node1, *node2, *head;
    node1 = malloc(sizeof(listNode));
    node2 = malloc(sizeof(listNode));
    node1->mun = 10;
    node2->mun = 20;
    node2->next = NULL;
    node1->next = node2;
    head = node1;
    listNode **ptrHead = &head;
    insertNode(ptrHead,0,0);
    insertNode(ptrHead,1,0);
    insertNode(ptrHead, 1, 0);
    head = *ptrHead;
    printLish(head);
    deleteNode(ptrHead,4);
    printLish(head);
}