#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        next = nullptr;
    }
};
void insertAtHead(Node *&head,int data){
    Node* new_node = new Node(data); 
    new_node->next = head;
    head = new_node;
}
void display(Node *head){
    Node *temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL";
}

int main ()
{
    Node *head = NULL;
    insertAtHead(head,2);
    insertAtHead(head,4);
     display(head);

    return 0;
}