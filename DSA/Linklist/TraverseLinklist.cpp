#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
};
Node *first = NULL;
void create(int arr[],int n){
    int i;
     Node *t,*last;
    first = new Node;
    first -> data = arr[0];
    first->next = nullptr;
    last = first;
    for (int i=1;i<n;i++){
    t = new Node;
    t->data = arr[i];
    t->next = nullptr;
    last->next = t;
    last = t;
    }
}
void display(Node *p){
    while(p!=nullptr){
        cout<<p->data<< " ";
        p = p->next;
    }cout<<endl;
}
void display1(Node *p){
    if(p!=NULL){
        display1(p->next);
        cout<<p->data<<" ";
    }
}
int count (Node *q){
   static int x = 0;
    if (q == NULL){
        return x;
    }
    x++;
    count(q->next);
    
}
int main (){
int arr[] = {10,20,30,40,50,45,94,75};
create(arr,8);
display(first);
display1(first);
cout<<count(first)<<endl;

    return 0;
}