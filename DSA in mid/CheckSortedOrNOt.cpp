#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
};Node * first = nullptr;
void create(int val){
Node *t,*last;
t = new Node();
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
    }cout<<endl;}
/*void check_is_sorted(){
bool flag = true;
Node *q,*p = first;
while (p->next!=nullptr){
    q = p;
    p = p->next;
    if (q->data > p->data){
    flag = false;
    break; }
}
if (flag){
    cout<<"Sorted"<<endl;
}else cout<<"Not Sorted"<<endl;
}*/
int check_is_sorted(){
Node *p = first;
int x = INT_MIN;
while(p!=nullptr){
    if (p->data < x){
        return false;
    }
    x = p->data;
    p = p->next;
}
return true;
}
void deleteDuplicate(){
    Node *p = first;
    Node *q = first->next;
    while (q!=nullptr){
        if (p->data == q->data){
            p->next = q->next;
            delete q;
            q = p->next;
        }
        p = q;
        q = q->next;
    }
} 
void reverseUsingVariable(){
Node *p = first;
int cnt = 0;
p = first;
vector<int> v;
while (p!=nullptr){
v.push_back(p->data);
p = p->next;
}
p = first;
int i = v.size()-1;
while (p!=nullptr){
    p->data = v[i];
    p = p->next;
    i--;
}
}
void recerseUsingLinks(){
    Node *p = first;
    Node *q,*r; 
    while (p!=nullptr){
        r =q;
        q = p;
        p = p->next;
        q -> next = r;
    }
    first = q;
}
int main(){
    create(10);
    create(20);
    create(30);
    create(30);
    create(40);
    display(first);
    cout<<check_is_sorted()<<endl;
    deleteDuplicate();
    display(first);
    reverseUsingVariable();
    display(first);
    recerseUsingLinks();
    display(first);

    return 0;
}