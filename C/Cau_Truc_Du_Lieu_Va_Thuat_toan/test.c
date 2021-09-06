#include<stdio.h>
#include<stdlib.h>

typedef struct _listnode {
    int num;
    struct _listnode *next;
} ListNode;


//phần 2

void printList(ListNode *head){
	ListNode *cur=head;
    if (cur == NULL){
        printf("Danh sach lien ket khong co phan tu nao");
    }else{
        while( cur != NULL ){
            printf("%d\n", cur->num);
            cur=cur->next;
        }
    }
}

//phần 1
int main(){
    ListNode *node0, *node1, *head, *head2;
	node0 = malloc(sizeof(ListNode)); 
	node1 = malloc(sizeof(ListNode)); 
	node0->num = 20; 
	node1->num = 30; 
	// printList(head);
	node0->next = node1 ; 
	node1->next = NULL ; 
	head = node0 ;
	// printList(head);

printList(head);
}