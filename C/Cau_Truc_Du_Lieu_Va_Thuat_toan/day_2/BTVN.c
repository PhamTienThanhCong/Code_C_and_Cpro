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

// //phần 4
// void insertNode(ListNode **pHead, int index, int value){
//     ListNode *cur, *newNode;
//     if (*pHead == ___ || index == ___ ){
//         newNode = malloc(sizeof(ListNode));
//         newNode->num = value;
//         newNode->next = ___ ;
//         *pHead = ___ ;
//     }
//     else if ((cur = findNode( ___, ___ )) != NULL){
//         newNode = malloc(sizeof(ListNode));
//         newNode->num = value;
//         newNode->next = ___ ;
//         cur->next =___ ;
//     } else printf("can not insert the new item at index %d!\n", index);
// }

// //phần 5
// void removeNode(ListNode **ptrHead, int index){
//     ListNode *cur, *pre;
//     if (index == ___ ) {
//         cur = ___ ;
//         *ptrHead = ___;
//         free(cur);
//     } else {
//         pre = findNode( ___ , ___);
//         cur = ___ ;
//         pre->next = ___ ;
//         free(cur);
//     }
// }

int main(){
    //phần 1
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
    head2 = findNode(head,1);
    // head2->next = NULL;
    printList(head2);
}