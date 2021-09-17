#include <stdio.h>
#include <stdlib.h>
#include "TongHam.h"



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