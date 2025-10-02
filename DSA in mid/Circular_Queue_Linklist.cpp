#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int data){
        this-> data = data;
    }
};Node *head = 0;
Node *tail;
void front(int val){
Node *temp = new Node(val);
temp->next = nullptr;
if(head == nullptr){
    head = tail = temp;
    tail->next = head;}
tail->next = temp;
tail = temp;
tail->next = head;
}
void pop(){
    head = head->next;
    tail->next = head;
}
void top(){
    cout<<head->data<<endl;
}
void display(){
    Node *p = head;
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while(p!=head);
    
}
int main(){
    front(1);
    front(2);
    front(3);
    front(4);
    front(5);
    pop();
    front(6);
    display();
    return 0;
}