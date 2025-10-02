#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node * first = NULL;
    Node *last = NULL;
    Node *third = NULL;
    void insert(vector<int> &v){
        int n = v.size();
     Node *temp;
     first = new Node ;
     first->data = v[0];
     first->next = nullptr;
     temp = first;
     for (int i=1;i<n;i++){
     Node *t;
     t = new Node;
     t-> data = v[i];
     t->next = nullptr;
     temp->next = t;
     temp = t; 
     }
    }
    void insert1(vector<int> &v){
        int n = v.size();
     Node *temp;
     last = new Node ;
     last->data = v[0];
     last->next = nullptr;
     temp = last;
     for (int i=1;i<n;i++){
     Node *t;
     t = new Node;
     t-> data = v[i];
     t->next = nullptr;
     temp->next = t;
     temp = t; 
     }
    }
    void display(Node *p){
        if (p == nullptr){cout<<endl;return; }
        cout<<p->data<<" ";
        display(p->next);
    }
    void LinearSearch(Node *p,int val){
        Node *q;
        while(p!=nullptr){
            if (p->data == val){
             q ->next = p->next;
             p->next = first;
             first = p;
            }
            q = p;
            p=p->next;
        }
    }
    void insertAtHead(int val){
     Node *q = new Node;
     q->data = val;
     q->next = first;
     first = q;
    }
    void insertAtpos(Node *p,int pos,int val){
    Node *t  = new Node;
    t->data = val;
        if (pos == 0){
            insertAtHead(val);
        }
        for (int i=0;i<pos-1;i++){
          p = p->next;
        }
        t->next = p->next;
        p->next = t;
        }
    void insertAtSpos(Node *p,int val){
        Node *q = new Node;
        q->data = val;
       // q->next = NULL;
        Node *t = new Node ;
        //p = first;
        t = first-1;
        while(p->data <val){
           t = p;
            p = p->next;
        }
        cout<<t->data<<" "<<p->data<<endl;
        q->next = t->next;
        t->next = q;
    }
    void deleteAtHead(Node *p){
       first = first -> next;
       delete(p);
    }
    void deleteAtpos(Node *p,int pos){
        if (pos == 0){
            deleteAtHead(first);
        }
        Node *q = first -1;
        for (int i = 0;i<pos;i++){
            q = p;
            p = p->next;
        }
        q ->next = p->next;
        delete(p); 
    }
    bool SortCheck(Node *p){
        // bool check = true;
       while(p->next!=nullptr){
        if (p->data > p->next->data){
             return false;
        }
        p = p->next;
    }
    return true;
    }
    void Reverse2(Node *p){
        Node *q,*r;
        q = first-1;
        r = first-2;
        while(p!=NULL){
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        first = q;
    }
void Reverse(Node *p) {
    Node *q = nullptr;
    Node *r = nullptr;

    while (p != nullptr) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}
void Rreverse(Node *p){
    if (p == nullptr)return;
Rreverse(p->next);
cout<<p->data<<" ";
}
void concatination(Node *p,Node *q){
     p = first;
    while(p->next!=nullptr){
        p = p->next;
    }
    p->next = q;
}
void merge(Node *p,Node *q){
  Node *last;
  if (p->data < q->data){
    third = p = last;
    p = p->next;
    third -> next = NULL;
  }
  else{
    third = q = last;
    q = q->next;
    third ->next = NULL; 
  }
  while(p && q){
    if (p->data < q->data){
        last ->next = p;
        last = p;
        p = p->next;
        last->next = NULL;
    }
    else{
        last -> next = q;
        last = q;
        q = q->next;
        last->next = NULL;
    }
  }
  if (p){
    last->next = p;
  }
  if (q) last->next = q;
}
}; 
int main ()
{
    Node *p = new Node;
    vector<int> v = {65,20,30,40,45,60,70};
    vector<int> v1 = {5,9,5,8,1,6,2,6};
     p-> insert(v);
     p->insert1(v1);
//     p->display(p->first);
//    p->LinearSearch(p->first,54);
//    p->display(p->first);
//    p->insertAtHead(20);
//    p->display(p->first);
//    p->insertAtpos(p->first,0,58);
//    p->display(p->first);
//       p->insertAtSpos(p->first,55);
//       p->display(p->first);
//       p->deleteAtHead(p->first);
//       p->display(p->first);
//       p->deleteAtpos(p->first,5);
//       p->display(p->first);
//       int ans = p->SortCheck(p->first);
//       if (ans == 1)cout<<"This linklist is Sorted"<<endl;
//       else cout<<"Not Sorted"<<endl;
//     p->Reverse(p->first);
    // p->concatination(p->first,p->last);
    // p->display(p->first);
    p->merge(p->first,p->last);
    p->display(p->third);
    return 0;
}