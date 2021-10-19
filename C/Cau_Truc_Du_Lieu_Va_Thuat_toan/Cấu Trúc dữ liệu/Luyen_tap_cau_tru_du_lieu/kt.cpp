#include<bits/stdc++.h>
#include<string.h>
 
class PTLinkedList
{
    struct Node    // Khai báo 1 cấu trúc dữ liệu cho 1 node
    {
        int SoAo;
        char Name[25];
        char NgSing[25];
        int Luong;
        char ThoiHan[25];
        Node* p_next_;
    };
 
public:
    PTLinkedList() { p_head_ = NULL; }
    ~PTLinkedList()
    {
        Node* head = p_head_;
        while (head)
        {
            Node* temp = head;
            head = head->p_next_;
            delete temp;
            temp = NULL;
        }
    }
 
    void AddValue(int soAo, char name, char ngsing, int luong, char ThoiHan)  // Thêm 1 phần tử mới vào đầu danh sách
    {
        Node* new_node = new Node();
        new_node->SoAo = soAo;
        new_node->Name = name;
        new_node->NgSing = ngsing;
        new_node->Luong = luong;
        new_node->ThoiHan = ThoiHan;
        new_node->p_next_ = p_head_;
        p_head_ = new_node;
    }
private:
    Node* p_head_;   // Luôn có 1 con trỏ pHead quản lý phần tử đầu.
};
 
int main(){
    
}