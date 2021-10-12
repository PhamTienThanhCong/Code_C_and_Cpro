#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct _listnode
{
    char *str;
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
            printf("%d\n", cur->str);
            cur = cur->next;
        }
    }
}


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


void insertNode(ListNode **pHead, int index, char *value)
{
    ListNode *cur, *newNode;
    if (*pHead == NULL || index == 0)
    {
        newNode = malloc(sizeof(ListNode));
        newNode->str = value;
        newNode->next = *pHead;
        *pHead = newNode;
    }
    else if ((cur = findNode(*pHead, index - 1)) != NULL)
    {
        newNode = malloc(sizeof(ListNode));
        newNode->str = value;
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
void enqueue(Queue *q, char *item) { 
 	insertNode( &(q->ll.head) , q->ll.size, item); 
 	q->ll.size = q->ll.size + 1 ; 
} 
char* dequeue(Queue *q) { 
	char* item; 
	if (q->ll.head != NULL) { 
	 	item = (q->ll.head) -> str ; 
	 	removeNode( &(q->ll.head), 0 ); 
	 	(q->ll).size = (q->ll).size - 1 ; 
	 	return item; 
	} 
	else { 
		printf("Hang doi rong"); 
		return 0; 
	} 
}

int main(){
	int n, i;
	printf("Nhap so tu nhien: ");
	setbuf(stdout, NULL);
	scanf("%d",&n);
	Queue *q = malloc(sizeof(Queue));
	q->ll.size = 0 ;
	q->ll.head = NULL ; 
	char str[] = "1" ;
	enqueue(q, str);
	for(i=0; i<n; i++){
		char *s = dequeue(q);
		char *s0= malloc(sizeof(char) * (strlen(s)+2));
		char *s1= malloc(sizeof(char) * (strlen(s)+2));
		strcpy(s0, s);
		strcpy(s1, s);
		s0[strlen(s)] = '0';
		s0[strlen(s) +1] = '\0';
		s1[strlen(s)] = '1';
		s1[strlen(s) +1] = '\0';
		enqueue(q, s0);
		enqueue(q, s1);
		printf("%s \n",s);
		
	}
}
