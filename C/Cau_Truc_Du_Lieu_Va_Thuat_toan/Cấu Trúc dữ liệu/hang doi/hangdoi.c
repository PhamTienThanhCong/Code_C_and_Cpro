#include <stdio.h>
#include <stdlib.h>
#include "ham_of_hang_doi.h"

int main(){
	Queue *q = malloc(sizeof(Queue) ); 
 	q->ll.size = 0 ; 
 	q->ll.head= NULL ;
 	printList(q->ll.head);
 	
} 

