#include <stdio.h>
#include <stdlib.h>

typedef struct Note {
    int value;
    struct Note* next;
} Note;

int main()
{
    Note* pHeader = (Note*)malloc(sizeof(Note));
    pHeader->value = 10;
    printf("Header value = %d\n", pHeader->value);
    Note* current = pHeader;
    for (int i = 0; i < 3; ++i){
        Note* newValue = (Note*)malloc(sizeof(Note));
        newValue->next = NULL;
        printf("Nhap phan tu: ");
        scanf("%d", &newValue->value);
        current->next = newValue;
        current = newValue;
    }
    printf("======================");
    current = pHeader;
    while (current->next != NULL){
        printf("%d\n", current->value);
        current = current->next;
    }
    printf("%d\n", current->value);
    return 0;
}
