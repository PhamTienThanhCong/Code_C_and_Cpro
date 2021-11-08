#include <stdio.h>
#include <stdlib.h>

typedef struct _listNode
{
    int mun;
    struct _listNode *next;
} listNode;

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
        if (cur != NULL && findNode(*ptrHead, index) != NULL){
            cur->next = (cur->next)->next;
        }else
        {
            printf("khong the xoa");
        }
    }
}