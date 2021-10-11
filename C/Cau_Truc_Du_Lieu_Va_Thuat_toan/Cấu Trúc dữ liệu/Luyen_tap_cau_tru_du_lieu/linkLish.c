#include <stdio.h>
#include <stdlib.h>

typedef struct _listNode
{
    int mun;
    struct _listNode *next;
} listNode;

// printlish

void printLish(listNode *head)
{
    listNode *cur = head;
    if (cur == NULL)
    {
        printf("day trong !!!");
    }
    else
    {
        while (cur != NULL)
        {
            printf("%d ", cur->mun);
            cur = cur->next;
        }
    }
    printf(" \n");
}

listNode *findNode(listNode *head, int index)
{
    listNode *cur = head;
    if ((head == NULL) || (index < 0))
    {
        printf("Phan tu tim kiem kkhong ton tai");
        return NULL;
    }
    else
    {
        while (index > 0)
        {
            cur = cur->next;
            index --;
            if (cur == NULL)
            {
                printf("Phan tu tim kiem khong ton tai");
                return NULL;
            }
        }
        return cur;
    }
}

void insertNode(listNode **pHead, int index, int number)
{
    listNode *cur, *newNode;
    if (*pHead == NULL || index == 0)
    {
        newNode = malloc(sizeof(listNode));
        newNode->mun = number;
        newNode->next = *pHead;
        *pHead = newNode;
    }
    else
    {
        cur = findNode(*pHead, index - 1);
        if (cur != NULL){
            newNode = malloc(sizeof(listNode));
            newNode->mun = number;
            newNode->next = cur->next;
            cur->next = newNode;
        }else
        {
            printf("khong the chen");
        }
    }
}

void deleteNode(listNode **ptrHead, int index){
    listNode *cur;
    if(index == 0){
        cur = *ptrHead;
        *ptrHead = cur->next;
    }
    else
    {
        cur = findNode(*ptrHead, index - 1);
        if (cur != NULL){
            cur->next = (cur->next)->next;
        }else
        {
            printf("khong the xoa");
        }
    }
}

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
    deleteNode(ptrHead,2);
    deleteNode(ptrHead,2);
    printLish(head);
}