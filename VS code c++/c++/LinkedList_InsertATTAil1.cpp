#include<iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
    Node(int data){
        this->data = data;
        next = nullptr;
    }
};
void insertAttail(Node *&head,int data){
    Node *new_ptr = new Node(data);
    if (head==nullptr){
        head = new_ptr;
        return;
    }
    Node *temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
      
    }
    temp->next = new_ptr;
}
void display(Node *head){
Node*temp =head;
while(temp!=nullptr){
    cout<<temp->data<<"->";
    temp = temp->next;
}cout<<"NULL";
}
int main (){
    Node *head = nullptr;
    insertAttail(head,1);
    insertAttail(head,2);
    display(head);
    return 0;
} 