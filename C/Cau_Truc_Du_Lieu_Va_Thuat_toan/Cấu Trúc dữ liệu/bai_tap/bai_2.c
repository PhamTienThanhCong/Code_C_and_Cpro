#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _listnode
{
    char kiTu;
    struct _listnode *next;
} ListNode;

typedef struct _linkedlist
{
    ListNode *head;
    int size;
} LinkedList;

typedef struct _queue
{
    LinkedList ll;
} Queue;

ListNode *findNode(ListNode *head, int i)
{
    ListNode *cur = head;
    if ((head == NULL) || (i < 0))
    {
        printf("Danh sach lien ket rong hoac phan tu tim kiem khong ton tai");
        return NULL;
    }
    while (i > 0)
    {
        cur = cur->next;
        i = i - 1;
        if (cur == NULL)
        {
            printf("Phan tu tim kiem khong ton tai");
            return NULL;
        }
    }
    return cur;
}

void insertNode(ListNode **pHead, int index, char value)
{
    ListNode *cur, *newNode;
    if (*pHead == NULL || index == 0)
    {
        newNode = malloc(sizeof(ListNode));
        newNode->kiTu = value;
        newNode->next = *pHead;
        *pHead = newNode;
    }
    else if ((cur = findNode(*pHead, index - 1)) != NULL)
    {
        newNode = malloc(sizeof(ListNode));
        newNode->kiTu = value;
        newNode->next = cur->next;
        cur->next = newNode;
    }
    else
        printf("can not insert the new item at index %d!\n", index);
}

void removeNode(ListNode **ptrHead, int index)
{
    ListNode *cur, *pre;
    if (index == 0)
    {
        cur = *ptrHead;
        *ptrHead = cur->next;
        free(cur);
    }
    else
    {
        pre = findNode(*ptrHead, index - 1);
        cur = pre->next;
        pre->next = cur->next;
        free(cur);
    }
}

void enqueue(Queue *q, char item)
{
    insertNode(&(q->ll.head), q->ll.size, item);
    q->ll.size = q->ll.size + 1;
}

char dequeue(Queue *q)
{
    char item;
    if (q->ll.head != NULL)
    {
        item = (q->ll.head)->kiTu;
        removeNode(&(q->ll.head), 0);
        (q->ll).size = (q->ll).size - 1;
        return item;
    }
    else
    {
        printf("Hang doi rong");
        return '\n';
    }
}

int peek(Queue *q)
{
    if (q->ll.head != NULL)
        return (q->ll.head)->kiTu;
    else
    {
        printf("Hang doi rong");
        return 0;
    }
}

int isEmptyQueue(Queue *q)
{
    if ((q->ll).size == 0)
        return 1;
    return 0;
}

void printList(Queue *q)
{
    ListNode *cur = q->ll.head;
    if (cur == NULL)
    {
        printf("Danh sach lien ket khong co phan tu nao");
    }
    else
    {
        while (cur != NULL)
        {
            printf("%c ", cur->kiTu);
            cur = cur->next;
        }
    }
}

int main(){
    //EAS*Y*QUE***ST***10*N***
    char d[50] = "EAS*Y*QUE***ST***10*N***";
    Queue *q = malloc(sizeof(Queue));
	q->ll.size = 0;
	q->ll.head = NULL;
    //scanf("%s",d);
    for(int i=0;i<strlen(d);i++)
        if (d[i]=='*')
            printf("%c ",dequeue(q));
        else
            enqueue(q, d[i]);
    
    //printList(q);
}