#include<iostream>
using namespace std;
class Node{
public:
Node *next;
int data;
Node(int data){
    this -> data = data;
}
};
void insertAthead(Node *&head,int data){
Node*new_node = new Node(data);
new_node->next = head;
head = new_node;
}
void insertAtPOs(Node *&head, int k ,int val){
Node *temp = head;
int curr = 0;
while(curr!=k){
    temp = temp->next;
    curr++;
}
temp->data = val;
}
void deleteAtHead(Node * &head){
    Node *temp = head;
    head = head->next;
    free(temp); 
}
void deleteAtTAil(Node *&head){
    Node *  new_ptr = head;
    while(new_ptr->next->next!=nullptr){
        new_ptr = new_ptr->next;
    }
    Node *temp = new_ptr->next;
    new_ptr->next = nullptr;
    free(temp);
}
void deleteAtpos(Node *&head,int pos){
    if (pos == 0){
        deleteAtHead(head);
    }
    Node *new_node = head;
    int pos1 = 0;
    while(pos1!=pos-1){
        new_node = new_node->next;
        pos1++;
    }
    Node *temp = new_node->next;
    new_node->next = new_node->next->next;
    free(temp); 
}
void display(Node *head){
Node *temp = head;
while(temp!=nullptr){
    cout<<temp->data<<"->";
    temp  = temp->next;
}cout<<"NULL"<<endl;
}
int main (){ 
    Node *head =nullptr;
    insertAthead(head,1);
    insertAthead(head,2);
    insertAthead(head,3);
    insertAthead(head,4);
    insertAthead(head,5);
    insertAthead(head,7);
     display(head);
    insertAtPOs(head,1,10);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTAil(head);
    display(head);
    deleteAtpos(head,2);
    display(head);
    return 0;

}
