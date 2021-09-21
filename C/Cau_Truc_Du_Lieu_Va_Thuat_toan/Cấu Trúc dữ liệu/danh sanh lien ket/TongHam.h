#include <stdio.h>
#include <stdlib.h>


//Cấp dữ liệu
typedef struct _listnode
{
    int num;
    struct _listnode *next;
} ListNode;

typedef struct _linkedlist
{
    ListNode *head;
    int size;
} LinkedList;

typedef struct _stack
{
    LinkedList ll;
} Stack;

typedef struct _queue
{
    LinkedList ll;
} Queue;

//Hàm 

void printList(ListNode *head)
{
    ListNode *cur = head;
    if (cur == NULL)
    {
        printf("Danh sach lien ket khong co phan tu nao");
    }
    else
    {
        while (cur != NULL)
        {
            printf("%d\n", cur->num);
            cur = cur->next;
        }
    }
}

//phần 3
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

//phần 4
void insertNode(ListNode **pHead, int index, int value)
{
    ListNode *cur, *newNode;
    if (*pHead == NULL || index == 0)
    {
        newNode = malloc(sizeof(ListNode));
        newNode->num = value;
        newNode->next = *pHead;
        *pHead = newNode;
    }
    else if ((cur = findNode(*pHead, index - 1)) != NULL)
    {
        newNode = malloc(sizeof(ListNode));
        newNode->num = value;
        newNode->next = cur->next;
        cur->next = newNode;
    }
    else
        printf("can not insert the new item at index %d!\n", index);
}

//phần 5
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

//hàm push
void push(Stack *s, int item)
{
    insertNode(&(s->ll.head), s->ll.size, item);
    s->ll.size = s->ll.size + 1;
}

int pop(Stack *s)
{
    int item;
    if (isEmptyStack(s)!=0)
    {
        item = s->ll.head->num;
        removeNode(&(s->ll.head), 0);
        (s->ll).size = (s->ll).size - 1;
        return item;
    }
    else
    {

        printf("Ngan xep rong");
        return 0;
    }
}

int peek(Stack *s)
{
    if (isEmptyStack(s)!=0)
        return s->ll.head->num;
    else
    {

        printf("Ngan xep rong");
        return 0;
    }
}
//bai8
int isEmptyStack(Stack *s)
{
    if (s->ll.head != NULL)
        return 1;
    return 0;
}

//xắp xếp
void sort(Stack *s){
    if (isEmptyStack(s)!=0){
        int get_in,size=s->ll.size;
        for (int i=1;i<=size;i++){
            get_in = pop(s);
            insertNode(&s->ll.head,s->ll.size,get_in);
        }
        s->ll.size=size;
    }
    else 
        printf("ham rong");
}

//hangdoi
void enqueue(Queue *q, int item) { 
 	insertNode( &(q->ll.head) , q->ll.size, item); 
 	q->ll.size = q->ll.size + 1 ; 
} 
int dequeue(Queue *q) { 
	int item; 
	if (q->ll.head != NULL) { 
	 	item = (q->ll.head) -> num ; 
	 	removeNode( &(q->ll.head), 0 ); 
	 	(q->ll).size = (q->ll).size - 1 ; 
	 	return item; 
	} 
	else { 
		printf("Hang doi rong"); 
		return 0; 
	} 
}
int peek(Queue *q){ 
 	if (q->ll.head != NULL) 
 		return (q->ll.head) -> num ; 
 	else { 
		printf("Hang doi rong"); 
		return 0; 
	} 
} 
int isEmptyQueue(Queue *q){ 
	if((q->ll).size == 0)
		return 1;
	return 0;
}