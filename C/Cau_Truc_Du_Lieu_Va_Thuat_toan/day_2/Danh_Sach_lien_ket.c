#include <stdio.h>
#include <stdlib.h>

typedef struct _listnode {
    int num;
    struct _listnode *next;
} ListNode;


// Phần 2
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

//phần 3
ListNode *findNode(ListNode *head, int i) {
    ListNode *cur = head;
    if ((head == NULL) || (i < 0)) {
        printf("Danh sach lien ket rong hoac phan tu tim kiem khong ton tai");
        return NULL;
    }
    while (i > 0 ) {
        cur = cur->next ;
        i = i-1 ;
        if (cur == NULL) {
            printf("Phan tu tim kiem khong ton tai");
            return NULL;
        }
    }  
    return cur;
}

//phần 4
void insertNode(ListNode **pHead, int index, int value){ 
	 ListNode *cur, *newNode; 
	 if (*pHead == NULL || index == 0 ){ 
	 	newNode = malloc(sizeof(ListNode)); 
	 	newNode->num = value; 
	 	newNode->next = *pHead ; 
	 	*pHead = newNode ; 
	 } 
	 else if ((cur = findNode(*pHead , index-1 )) != NULL){ 
	 	newNode = malloc(sizeof(ListNode)); 
	 	newNode->num = value; 
	 	newNode->next = cur->next ; 
	 	cur->next = newNode ; 
	} else printf("can not insert the new item at index %d!\n", index); 
}

//phần 5
void removeNode(ListNode **ptrHead, int index){ 
	ListNode *cur, *pre; 
	if (index == 0 ) { 
	 	cur = *ptrHead ; 
	 	*ptrHead = cur->next; 
	 	free(cur); 
	} else { 
	 	pre = findNode( *ptrHead , index-1); 
	 	cur = pre->next ; 
	 	pre->next = cur->next ; 
	 	free(cur); 
	} 
}   

int main(){
    //phần 1
    ListNode *node0, *node1, *head;
	node0 = malloc(sizeof(ListNode)); 
	node1 = malloc(sizeof(ListNode)); 
	node0->num = 20; 
	node1->num = 30; 
	node0->next = node1 ; 
	node1->next = NULL ; 
	head = node0 ;
    printf("Phan 1:\n");
	printList(head);
    printf("Phan 2:\n");
    printf("%d",findNode(head,1)->num);
    printf("\nPhan 3:\n");
    insertNode(&head,0,10);
    printList(head);
    printf("Phan 4:\n");
    removeNode(&head,1);
    printList(head);
    
}