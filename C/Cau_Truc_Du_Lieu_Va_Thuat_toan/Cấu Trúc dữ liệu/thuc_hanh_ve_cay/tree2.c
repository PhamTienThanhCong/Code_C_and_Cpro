#include <stdio.h>
#include <stdlib.h>

typedef struct _Tree
{
    int value;
    struct _Tree *leftTree;
    struct _Tree *rightTree;
} tree;

tree *insertTree(tree *root, int value)
{
    if (root == NULL)
    {
        tree *r;
        r = malloc(sizeof(tree));
        r->value = value;
        r->leftTree = NULL;
        r->rightTree = NULL;
        return r;
    }
    if ( root->value > value ){
        root->leftTree = insertTree( root->leftTree, value );
    }
    else if ( root->value < value ) {
        root->rightTree = insertTree( root->rightTree, value );
    }
    return root;
}

int findTree(tree *root, int value){
    if(root == NULL){
        return 0;
    }
    if(root->value == value){
        return 1;
    }
    if (root->value < value){
        return findTree(root->rightTree, value);
    }
    else if (root->value > value){
        return findTree(root->leftTree, value);
    }
}

int main()
{
    tree *root;
    root = malloc(sizeof(tree));
    root = NULL;
    root = insertTree(root, 3);
    root = insertTree(root, 2);
    root = insertTree(root, 4);
    root = insertTree(root, 6);
    root = insertTree(root, 1);
    printf("%d", findTree(root,1));
}