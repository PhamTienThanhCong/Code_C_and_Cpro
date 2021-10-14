#include <stdio.h>
#include <stdlib.h>

typedef struct _Tree
{
    int value;
    struct _Tree *leftTree;
    struct _Tree *rightTree;
} tree;

void insertTree(tree **root, int value)
{
    tree *r = *root;
    if (*root == NULL)
    {
        tree *r;
        r = malloc(sizeof(tree));
        r->value = value;
        r->leftTree = NULL;
        r->rightTree = NULL;
        *root = r;
    }
    else if((r->leftTree)->value > value){
        insertTree(r->leftTree);
    }
}

int main()
{
    tree *root;
    root = malloc(sizeof(tree));
    // root->value = 0;
    // root->leftTree = NULL;
    // root->rightTree = NULL;
    root = NULL;
    insertTree(&root, 3);
    printf("%d", root->value);
}