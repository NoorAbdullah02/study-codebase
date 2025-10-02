#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
};
Node *first = NULL;
void insert(int val){ 
Node * t, *last;
t = new Node ();
t->data = val;
t->next = nullptr;
if (first == nullptr){
    first = last = t;
}
last->next = t;
last = t;
}
void display(Node *p){ 
while(p!=nullptr){
    cout<<p->data<<" ";
    p = p->next;
}cout<<endl;
}
// Sorted list insertion
void insetAtSorted(int val){
Node *t,*q,*p = first;
t = new Node();
t-> data = val;
if (first == nullptr || first->data<p->data){
t->next = first;
first = t;
return;
}
while(p!=nullptr && p->data <val){
    q = p;
    p=p->next;
}
t ->next = q->next;
q->next = t;
}
int main (){
insert(10);
insert(20);
insert(30);
insert(40);
display(first);
insetAtSorted(25);
display(first);
insetAtSorted(5);
display(first);
return 0;
}