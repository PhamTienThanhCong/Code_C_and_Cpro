#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>

//Khai báo ki?u c?a m?t nút trong danh sách liên k?t
typedef struct listnode
{
    int num;
    struct listnode *next;
} ListNode;
//Khai báo ki?u danh sách liên k?t
typedef struct linkedList
{
    ListNode *head;
    ListNode *tail;
    int size;
} LinkedList;
//Hàm printList
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
//Hàm findNode
ListNode *findNode(ListNode *head, int i)
{
    ListNode *cur = head;
    if (head == NULL || i < 0)
    {
        printf("Danh sách liên k?t r?ng ho?c ph?n t? tìm ki?m không t?n t?i\n");
        return NULL;
    }
    while (i > 0)
    {
        cur = cur->next;
        if (cur == NULL)
        {
            printf("Ph?n t? tìm ki?m không t?n t?i\n");
            return NULL;
        }
        i--;
    }
    //if(cur!=NULL) printf("Ph?n t? c?n tìm ki?m là: %d\n", cur->num);
    return cur;
}
//Hàm insertNode
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
        printf("Không th? thêm ph?n t? m?i vào v? trí index = %d\n", index);
}
//Hàm removeNode
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
//Cài d?t c?u trúc Stack d?a trên c?u trúc danh sách liên k?t
typedef struct stack
{
    LinkedList ll;
} Stack;
//Hàm push cho stack
void push(Stack *s, int item)
{
    insertNode(&(s->ll.head), 0, item);
    s->ll.size++;
}
//Hàm ki?m tra s? ph?n t? có b?ng 0 hay không
int isEmptyStack(Stack *s)
{
    if ((s->ll).size == 0)
        return 1;
    else
        return 0;
}
//Hàm pop l?y giá tr? ? d?nh ra kh?i ngan x?p
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
//Hàm peek l?y giá tr? ? d?nh ra kh?i ngan x?p nhung không xóa nút dó
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
