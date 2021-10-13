#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>

//Khai b�o ki?u c?a m?t n�t trong danh s�ch li�n k?t
typedef struct listnode
{
    int num;
    struct listnode *next;
} ListNode;
//Khai b�o ki?u danh s�ch li�n k?t
typedef struct linkedList
{
    ListNode *head;
    ListNode *tail;
    int size;
} LinkedList;
//H�m printList
void printList(ListNode *head)
{
    ListNode *cur = head;
    if (cur == NULL)
        return;
    while (cur != NULL)
    {
        printf("%d\t", cur->num);
        cur = cur->next;
    }
}
//H�m findNode
ListNode *findNode(ListNode *head, int i)
{
    ListNode *cur = head;
    if (head == NULL || i < 0)
    {
        printf("Danh s�ch li�n k?t r?ng ho?c ph?n t? t�m ki?m kh�ng t?n t?i\n");
        return NULL;
    }
    while (i > 0)
    {
        cur = cur->next;
        if (cur == NULL)
        {
            printf("Ph?n t? t�m ki?m kh�ng t?n t?i\n");
            return NULL;
        }
        i--;
    }
    //if(cur!=NULL) printf("Ph?n t? c?n t�m ki?m l�: %d\n", cur->num);
    return cur;
}
//H�m insertNode
void insertNode(ListNode **ptrhead, int index, int value)
{
    ListNode *cur, *newNode;
    if (ptrhead == NULL || index == 0)
    {
        newNode = malloc(sizeof(ListNode));
        newNode->num = value;
        newNode->next = *ptrhead;
        *ptrhead = newNode;
    }
    else if ((cur = findNode(*ptrhead, index - 1)) != NULL)
    {
        newNode = malloc(sizeof(ListNode));
        newNode->num = value;
        newNode->next = cur->next;
        cur->next = newNode;
    }
    else
        printf("Kh�ng th? th�m ph?n t? m?i v�o v? tr� index = %d\n", index);
}
//H�m removeNode
void removeNode(ListNode **ptrhead, int index)
{
    ListNode *cur, *pre;
    if (index == 0)
    {
        cur = *ptrhead;
        *ptrhead = cur->next;
        free(cur);
    }
    else
    {
        pre = findNode(*ptrhead, index - 1);
        cur = pre->next;
        pre->next = cur->next;
        free(cur);
    }
}
//C�i d?t c?u tr�c Stack d?a tr�n c?u tr�c danh s�ch li�n k?t
typedef struct stack
{
    LinkedList ll;
} Stack;
//H�m push cho stack
void push(Stack *s, int item)
{
    insertNode(&(s->ll.head), 0, item);
    s->ll.size++;
}
//H�m ki?m tra s? ph?n t? c� b?ng 0 hay kh�ng
int isEmptyStack(Stack *s)
{
    if ((s->ll).size == 0)
        return 1;
    else
        return 0;
}
//H�m pop l?y gi� tr? ? d?nh ra kh?i ngan x?p
int pop(Stack *s)
{
    int item;
    if (isEmptyStack(s) == 0)
    {
        item = s->ll.head->num;
        removeNode(&(s->ll.head), 0);
        s->ll.size--;
        return item;
    }
    else
        return 0;
}
//H�m peek l?y gi� tr? ? d?nh ra kh?i ngan x?p nhung kh�ng x�a n�t d�
int peek(Stack *s)
{
    int item;
    if (isEmptyStack(s) == 0)
    {
        item = s->ll.head->num;
        return item;
    }
    else
        return 0;
}
int isOperand(char ch){
	return ((ch >= 'a') && (ch <= 'z')) ||
		   ((ch >= 'A') && (ch <= 'Z'));
}

int Prec(char ch){
	switch(ch){
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;
	}
		return -1;
}

 
void infixToPostfix(char *exp, char *postfix){
	Stack *s = malloc(sizeof(Stack));
	s->ll.size = 0;
	s->ll.head = NULL;
	
	int i,k;
	k=-1;
	for(i=0;i < strlen(exp); i++){
		//toan hang
		if(isOperand(exp[i])){
			k++;
			postfix[k] = exp[i];
		}
		else if(exp[i] == '('){
			push(s,exp[i]);
		}
		else if( exp[i] == ')'){
			while(!isEmptyStack(s) && peek(s) != '(' ) {
				k++;
				postfix[k] = pop(s);
			}
			if(!isEmptyStack(s) && peek(s) != '('){
				printf("Bieu thuc trung to khong hop le");
				return ;
				
			} else pop(s);		
		}
		else{ //toan tu
			while(!isEmptyStack(s) && Prec(exp[i]) <= Prec(peek(s))) {
				k++;
				postfix[k] = pop(s);
			}
			push(s, exp[i]);
		}
	}
	while(!isEmptyStack(s)){
		k++;
		postfix[k] = pop(s);
	}
	postfix[++k] = '\0';
	
}

int main(void){
	char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
	char* postfix = malloc(sizeof(char) * (strlen(exp)+1));
	
	infixToPostfix(exp, postfix);
	printf( "Bieu thuc hau to: %s", postfix); 

}
