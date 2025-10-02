#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node* first = NULL;
    void insert(vector<int> &v){
        int n = v.size();
    Node *temp;
    first = new Node;
    first -> data = v[0];
    first->next = NULL;
    temp = first;
for (int i=1;i<n;i++){
    Node *p;
    p = new Node;
    p->data = v[i];
    p->next = NULL;
    temp -> next = p;
    temp = p;
}
    }
    void display(Node *p){
     if (p == NULL)return;
     cout<<p->data<<" ";
     display(p->next);
    }
    void LinearSearch(Node *p,int val){
        Node *q;
        while(p!=nullptr){
            if (p->data == val){
                q->next = p->next;
                p->next =first;
                first = p;
            }
            q = p;
            p = p->next;
        }
    }
    
};
int main ()
{
    Node *p = new Node ;
    vector<int> v = {10,20,30,40,50};
    p->insert(v);
    //p->display(p->first);
    p->LinearSearch(p->first,40);
    p->display(p->first);
    return 0;
}