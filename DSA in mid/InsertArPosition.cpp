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
void insert(int val,int pos){
Node* t = new Node();
t->data = val;
Node *q = first;
if (pos == 0){
t->next = first;
first = t;
}
for (int i=1;i<pos && q;i++){
q = q->next;
}
t->next = q->next;
q->next = t;
}

void display(Node *p){
    p = first;
    while(p!=NULL){ 
        cout<<p->data<<" ";
        p = p->next;
    }cout<<endl;
}
int main (){
     vector<int> v = {1,2,3,4,5,6};
     create(v,v.size());
     display(first);
     insert(10,3);
     display(first);  
     insert(10,7);
     display(first);
    return 0;
}