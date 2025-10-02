#include<iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
    Node(int val){
        this -> data = val;
    }
};Node *head = nullptr;
int size = 0;
 void push(int val){
    Node *temp = new Node (val);
    temp->next = head;
    head = temp;
    size++;
 }
 void display(){
    Node *temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
 }
 void Size(){
    cout<<size<<endl;
 }
 void top(){
    int x = head->data;
    cout<<endl<<x<<endl;
 }
 void pop(){
    if (head == nullptr)cout<<"Stack is Empty"<<endl;
    head = head -> next;
    size--;
 }
 void display(Node *temp){
    temp = head;
    if(temp == nullptr){
        return;}
    cout<<temp->data<<endl;
    display(temp->next);
 }
int main ()
{
    push(10);
    push(20);
    push(2);
    push(30);
    push(40);
    display();
    pop();
    top();
    Size();
return 0;
}