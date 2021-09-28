#include <stdio.h>
#include <stdlib.h>
#include "ham_of_hang_doi.h"

int main(){
	Queue *q = malloc(sizeof(Queue) ); 
 	q->ll.size = 0 ; 
 	q->ll.head= NULL ;
	enqueue(q,10);
	enqueue(q,20);
	enqueue(q,30);
 	// printList(q->ll.head);
	//printf("%d",dequeue(q)); //in xong xóa
	//printf("%d\n",peek(q));  // in xong không xóa
	
} 