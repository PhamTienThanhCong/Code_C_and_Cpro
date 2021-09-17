#include <stdio.h>
#include <stdlib.h>
#include "TongHam.h"

void sort(Stack *s){
    if (isEmptyStack(s)!=0){
        int get_in,size=s->ll.size;
        for (int i=1;i<=size;i++){
            get_in = pop(s);
            insertNode(&s->ll.head,s->ll.size,get_in);
        }
    }
    else 
        printf("ham rong");
}

int main(){
    int get_in;
    Stack *s = malloc(sizeof(Stack));
    s->ll.size = 0;
    s->ll.head = NULL;

    scanf("%d",&get_in);
    while (get_in != 0)
    {
        push(s,get_in);
        scanf("%d",&get_in);
    }
    sort(s);
    printList(s->ll.head);
}