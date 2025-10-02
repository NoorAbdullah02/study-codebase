#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node * next;
    int data;
};
Node * first = NULL;
void create(vector<int>&v){
int n = v.size();
Node *t;
first = new Node;
first->data = v[0];
first -> next = nullptr;
t = first;
for (int i=1;i<n;i++){
    Node * temp;
    temp = new Node;
    temp->data = v[i];
    temp->next = NULL;
    t->next = temp;
    t = temp;
}
}
void display(Node *p){
while(p!=nullptr){
    cout<<p->data<<" ";
    p = p->next;
}
}
int main (){
vector<int> v = {10,20,30,40,50};
create(v);
display(first);
    return 0;
}