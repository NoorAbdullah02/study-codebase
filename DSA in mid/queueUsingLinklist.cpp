#include<iostream>
using namespace std;
class Node {
    public:
    
    Node *next;
    int val;
    Node(int val){this->val = val;}
};Node *head = nullptr;
void push(int val){
    Node *temp = new Node(val);
    Node *tail;
    temp->next = nullptr;
    if(head == nullptr){
     head = tail = temp;
    }
    tail->next = temp;
    tail = temp;
}
void pop(){
    head = head->next;
}
void top(){
    cout<<head->val<<endl;
}
void display(Node *p){
    p = head;
    if (p == nullptr)cout<<"Queue is Empty"<<endl;
    while(p!=nullptr){
        cout<<p->val<<" ";
        p = p->next;
    }cout<<endl;
}
int main (){
    push(1);
    push(2);
    push(3);
    push(4);push(5);
    display(head);
    top();
    pop();
    top();
    display(head);
    return 0;
}