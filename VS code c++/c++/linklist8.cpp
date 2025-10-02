#include<iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
    Node(int data):data(data),next(NULL){}
};
class Linklist{
    public:
    Node *head = NULL;
    void insertAtTail(int data){
        Node*new_node = new Node (data);
        if (head == NULL){
            head = new_node;
            return;
        }
        Node*temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next= new_node;
    }
    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;
    }
};
int main(){
    Linklist ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);
    ll1.insertAtTail(7);
    ll1.display();

    return 0;
}