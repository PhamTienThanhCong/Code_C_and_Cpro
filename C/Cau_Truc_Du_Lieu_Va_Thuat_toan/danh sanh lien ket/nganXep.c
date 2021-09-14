#include <stdio.h>
#include <stdlib.h>
#include "TongHam.h"

int main()
{
    Stack *s = malloc(sizeof(Stack));
    s->ll.size = 0;
    s->ll.head = NULL;
    // printList(s->ll.head);
    push(s, 12);
    push(s, 34);
    push(s, 48);
    // printList(s->ll.head);
    int kq = pop(s);    
    if(kq!=0)
        printf("%d\n",kq);
    kq = peek(s);
    if(kq!=0)
        printf("%d",kq);
}
