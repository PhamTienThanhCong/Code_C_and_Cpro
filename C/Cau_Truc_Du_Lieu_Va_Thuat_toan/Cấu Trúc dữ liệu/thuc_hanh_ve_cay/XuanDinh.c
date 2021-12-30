#include "conio.h"
#include "stdio.h"
#include "stdlib.h"

//Cau truc cua Node
typedef struct Node{
   int info;
   struct Node *Left;
   struct Node *Right;
}Node;
//Dinh nghia cay nhi phan
typedef Node * Tree;

//Khoi tao Node
//Khoi tao Node
Node *MakeNode(int x) {
   Node*p = malloc(sizeof(Node));
   p ->info = x;
   p ->Left = NULL;
   p ->Right = NULL;
   return p;
}

//Them 1 node vao cay tim kiem nhi phan
Node *InsertNode(Node *T, int p) {
   if (p < (T)->info ) {
      if((T)->Left)
         (T)->Left = InsertNode(&(T)->Left,p);
      else
         (T)->Left = p;
         return(T);
   }
   else
   if (p > (T)->info){
      if((T)->Right)
         (T)->Right = InsertNode(&(T)->Right,p);
      else
         (T)->Right = p;
         return(T);
   }

}
//Dem so nut
int CountNode(Node *T) {
   if( T == NULL)
      return 0;
   else
      return 1 + CountNode(T->Left) + CountNode(T->Right);
}
// So nut trong cay la
int countNode (Node *cur){
	if(cur == NULL){
		return 0;
	}
	int l = countNode(cur->Left);
	int r = countNode(cur->Right);
	return l+r+1;
}
int main(){
    Node *root;
    root = malloc(sizeof(Node));
    root = NULL;
    int n,x;
    printf("Khoi tao nut goc: ");
    scanf("%d",&n);
    root = MakeNode(n);
    printf("So luong phan tu cay nhi phan: ");
    scanf("%d",&n);
    printf("nhap cac gia tri de chen vao cay nhi phan: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        root = InsertNode(root, x);
    }
    printf("\nSo nut trong cay la: %d",countNode(root));
    printf("\n so trong cay:%d ", CountNode(root));
}
