#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <conio.h>

struct node{
    int item;
    struct node *next;
};

typedef struct node* queuenode;

typedef struct {
    queuenode head;
    queuenode tail;
}queue;



void Init(queue *q ){
    // set giá trị queue là null
    q->head = q->tail = NULL;
}

queuenode create_node(int x){
    queuenode p;
    //cấp phát bộ nhớ
    p = (queuenode) malloc(sizeof(struct node));
    //điền giá trị
    p->item = x;
    p->next = NULL;
    //trả về queuenode p
    return p;
}
void put(queue* q, queuenode p){
    // kiểm tra xem q có null không
    if(q->head == NULL) {
            //set giá trị cho thằng q->head và q->tail
            q->head = q->tail=p;
    }else{
        // chèn giá trị vào next
        q->tail->next = p;
        // chuyển next thành tail
        q->tail = p;
    }
}
 // hầm in ra các giá trị trong queue
void tranverse_queue(queue q){
    printf("\n");
    for(queuenode p=q.head;p!=NULL;p=p->next){
        printf("%3d ",p->item);
    }
    printf("\n");
}

//in ra giá trị đầu tiên
int top(queue *q){
    // kiểm ra null
    if(q->head!=NULL){
        return q->head->item;
    }else return 0;
}

//in ra giá trị đầu tiên nhưng xóa đi ngay sau đó
int pop(queue *q){
    // kiểm ra null
    // 1 2 3 4 5
    //data = 1
    if(q->head!=NULL){
        //lấy giá trị đầu tiên
        queuenode p = q->head;
        int data = q->head->item;
        //bỏ qua giá trị đầu tiên
        q->head = q->head->next;
        if(q->head==NULL) 
            q->tail = NULL;
        //giải phóng bộ nhớ
        free(p);
        return data;
    }else return 0;
}
//dao nguoc queue
void reverse_queue(queue *q){
    //tạo 1 mảng và biến i
    int tmp[1000],i=0;

    queuenode prev = NULL;
    queuenode curr = q->head;
    queuenode next = NULL;
    queuenode newNode;
    // chuyển các giá trị từ queue đến mảng tmp
    while(q->head!=NULL){
        tmp[i] = q->head->item;
        pop(q);
        i++;
    }
    //tmp = 1 2 3 4
    // q = 4 3 2 1 
    for(int j=i-1;j>=0;j--){
        newNode = create_node(tmp[j]);
        put(q,newNode);
        //tranverse_queue(*q);
    }
}
//sap xep queue
void sort_queue(queue *q,int n){
    int tmp[1000],i=0;
    queuenode newNode;
    // chuyển các giá trị từ queue đến mảng tmp
    while(q->head!=NULL){
        tmp[i] = pop(q);
        i++;
    }
    //hàm xắp xếp tmp
    for(int j = 0; j < i ; j++){
        for(int t = j+ 1; t < i; t++){
            if(tmp[j] < tmp[t]){
                // Hoan vi 2 so a[i] va a[j]
                int tg = tmp[t];
                tmp[t] = tmp[j];
                tmp[j] = tg;        
            }
        }
    }
    //tmp = 1 2 3 4
    // q = 4 3 2 1 
    for(int j=i-1;j>=0;j--){
        newNode = create_node(tmp[j]);
        put(q,newNode);
        //tranverse_queue(*q);
    }
}



int main(){

    queue q;
    Init(&q);
    queuenode newNode;
    newNode = create_node(4);

    put(&q,newNode);

    newNode = create_node(2);
    put(&q,newNode);
    newNode = create_node(3);
    put(&q,newNode);
    newNode = create_node(1);
    put(&q,newNode);
     newNode = create_node(5);
    put(&q,newNode);

    //tranverse_queue(q);

    queue *ptrQ;
    ptrQ = &q;
    
    // printf("%d\n",top(&q));
    // printf("%d\n",pop(&q));
    // tranverse_queue(q);

    //reverse_queue(&q);
    // tranverse_queue(q);
    sort_queue(&q,0);
    //tranverse_queue(q);
    tranverse_queue(q);
}
