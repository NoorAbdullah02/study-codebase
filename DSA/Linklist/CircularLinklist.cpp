#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    Node * next;
    int data;
    Node * head;
    void create(vector<int> &v){
        int n = v.size();
     Node *t;
     head = new Node;
     head -> data = v[0];
     head->next = head;
     t = head;
     for (int i=1;i<n;i++){
      Node *temp = new Node;
      temp -> data = v[i];
      temp ->next = t->next;
      t->next = temp; 
      t = temp;
     }
    }
    void display(Node *p){
        do{
            cout<<p->data<<" ";
            p = p->next;
        }while(p!=head);
    }
    void Rdisplay(Node *p){
        static int flag = 0 ;
        if (p != head || flag == 0){
        flag = 1;
        cout<<p->data<<" ";
        Rdisplay(p->next);
        }
    }
    void insertAtHead(Node *p,int val){
      Node *t = new Node;
      t ->data = val;
      t -> next = head;
      while(p->next!= head){
        p = p->next;
      }
      t->next = p->next;
      p->next = t;

    }
    void insertAtPos(Node *p,int val,int pos){
        Node *q = new Node;
        q->data = val;
        q->next = nullptr;
        for (int i=0;i<pos-1;i++){
        p = p->next;
        }
      p->next = q;
      head = q;  
    }
};
int main ()
{
    Node * p = new Node;
    vector<int> v = {10,6,5,8,4};
    p->create(v);
    // p->Rdisplay(p->head);
    p->insertAtPos(p->head,8,2);
    p->insertAtHead(p->head,5);
    p->display(p->head);
    return 0;
}  