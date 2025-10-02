#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};Node *first = nullptr;
void create(vector<int> &v,int n){
    Node * t, *last;
    first = new Node();
    first->data = v[0];
    first->next = NULL;
    last = first; 
    for (int i=1;i<n;i++){
        t = new Node();
        t -> data = v[i];
        t -> next = NULL;
        last -> next = t;
        last = t;
    }
} 
void display(Node *p){
    p = first;
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }cout<<endl;
}
void deleteNode(int pos){
    Node *p,*q;
    p = first;
    if (pos == 0){
     q = new Node();
     first = first->next;
     int x = p->data;
     return;
    }
    for (int i=1;i<pos;i++){
        q = p;
        p = p->next;
    }
    q->next = p->next;
    int x = p->data;
    delete(p);    
}
int main (){
     vector<int> v = {1,2,3,4,5,6};
     create(v,v.size());
     display(first);
     deleteNode(0);
     display(first);
     deleteNode(3);
     display(first);
    return 0;
}