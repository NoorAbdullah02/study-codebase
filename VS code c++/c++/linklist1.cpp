#include<iostream>
using namespace std;
class Node {
    public:
    Node *next;
    int data;
    Node(int data){
        this-> data = data;
        next = NULL;
    }
};
void InsertAthead(Node *&head,int data){
    Node *new_node = new Node(data);
    new_node->next = head;
    head = new_node;
}
void INsertAtTail(Node *&head,int data){
    Node *temp = head;
    Node *new_node = new Node (data); 
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    temp->next = new_node;  
}
void INsertAtpos(Node *&head,int val ,int k){
    Node *new_node = new Node (val);
    if (k == 0){
    InsertAthead(head,val);
    return ;
    }
    int curr_pos = 0;
    Node *temp = head;
    while(curr_pos!=k-1){
        temp = temp->next;
        curr_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
void UpdateAtpos(Node *&head,int data,int pos){
    Node *new_node = new Node (data);
    Node *temp = head;
    int curr_pos = 0;
    while(curr_pos!=pos){
          temp = temp->next;
          curr_pos++;
    }
    temp->data = data;  
}
void DeleteAtpos(Node *&head,int pos){
    Node *temp = head;
    int curr_pos = 0;
    while(curr_pos!=pos-1){
        temp = temp->next;
        curr_pos++;
    }
    Node *tem = temp->next;
    temp->next = temp->next->next;
    free(tem); 
}
void deleteAtTail(Node *&head){
    Node *second_last = head;
    while(second_last->next->next!=NULL){
        second_last = second_last->next;
    }
    Node *temp = second_last->next;
    second_last ->next = NULL;
    free(temp);
}
void deleteAtHead(Node *&head){
Node *temp = head;
head = head->next;
free(temp);
}
void display(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}
int main ()
{
    Node *head = NULL;
    InsertAthead(head,5);
    InsertAthead(head,8);
    InsertAthead(head,9);
    display(head);
    INsertAtTail(head,6);
    INsertAtTail(head,7);
    INsertAtTail(head,8);
    display(head);
    INsertAtpos(head,5,3);
    display(head);
    UpdateAtpos(head,4,5);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    DeleteAtpos(head,3);
    display(head);
    return 0;
}