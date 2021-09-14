#include <stdio.h>
#include <stdlib.h>
#include "TongHam.h"

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
    if (findNode(head,1)){
        printf("%d",findNode(head,1)->num);
    }
    printf("\nPhan 3:\n");
    insertNode(&head,0,10);
    printList(head);
    printf("Phan 4:\n");
    removeNode(&head,1);
    printList(head);
    
}