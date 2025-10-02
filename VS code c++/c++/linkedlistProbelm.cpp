#include<iostream>
using namespace std;
class Node {
    public:
    Node *next;
    int val;
    Node(int val){
        this-> val = val;
        next = nullptr;
    }
};
void insertAthead(Node *& head,int val ){
    Node* new_node;
    new_node -> next= head;
    head = new_node;
}
void display(Node *head){
    Node *temp = head;
    while(temp!=nullptr){
        cout<<temp->val;
        temp = temp->next;
    }
}
int main (){
Node head = NULL;
insertAthead(head,1);
insertAthead(head,2);
insertAthead(head,3);
    return 0;
}