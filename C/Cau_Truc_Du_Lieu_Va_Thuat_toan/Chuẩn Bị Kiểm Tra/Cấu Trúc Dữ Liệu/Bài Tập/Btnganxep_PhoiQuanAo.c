#include <stdlib.h>
#include <stdio.h>
#include "lishNode.h"

typedef struct _stack{
    listNode *head;
}stack;

void push(stack *s, int value){
    insertNode(&(s->head),0,value);
}

int isEmtyStack(stack *s){
    if (s->head == NULL){
        return 0;
    }
    else{
        return 1;
    }
}

int pop(stack *s){
    if (isEmtyStack(s) != 0){
        int value;
        value = findNode((s->head),0)->mun;
        deleteNode(&(s->head),0);
        return value;
    }
    printf("defined !!!");
}

int peek(stack *s){
    if (isEmtyStack(s) != 0){
        int value;
        value = findNode((s->head),0)->mun;
        return value;
    }
    printf("defined !!!");
}


int main(){
	int day = 1; 
    int SoQuanAo = 5;
	int j, clothes=0;
	stack* s;
	int dryLeftDay[SoQuanAo]; 
    s = malloc(sizeof(stack));
	s->head = NULL;
    // thêm phần tử vào ngăn xếp
	for (j=1; j<=SoQuanAo; j++) 
		push(s, j); 
    // số ngày quần áo phải phơi    
	for (j=1; j<=SoQuanAo; j++) 
		dryLeftDay[j] = -1;
	while (day <=10 ) {
		for (j=1; j<=SoQuanAo; j++){
			dryLeftDay[j]--;
            if (dryLeftDay[j]==0) {
                push(s, j); 
            }   
        }
		
        clothes=pop(s);
        dryLeftDay[clothes] = 3;
		printf("Day %d is clothes No. %d. \n", day, clothes); 
		day++;
        
	}
}

	
