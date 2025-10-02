#include<iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
    Node(int data){
        this->data = data;
    }
};
void insertAtTail(Node* &head,int data){
    Node *new_node = new Node(data);
    if (head == nullptr){
        head = new_node;
        return;
    }
    Node *temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    temp->next = new_node;
}
void display(Node *head){
Node *temp = head;
while(temp!=NULL){
    cout<<temp->data<<"->";
    temp = temp->next;

}cout<<"NULL"<<endl;
}
int main (){
    Node * head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    display(head);
    return 0;
}

