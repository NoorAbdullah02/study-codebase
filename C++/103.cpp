#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    Node *next;
    int data;
};Node *first;
void create(int val){
Node *t,*last;
first = new Node;
first -> data = val;
first -> next = NULL;
last = first;
/*for(int i=1;i<n;i++){
    t = new Node;
    t -> data = v[i];
    t ->next = NULL;
    last -> next = t;
    last = t;
}}*/
}
void display(Node* p){
p = first;
while (p!=NULL){
    cout<<p->data<<" ";
    p= p->next;
}
}
int main (){

    create(5);
    create(1);
        create(5);

            create(65);

                create(78);

                    create(32);

                        create(5);
    create(5);

    display(first);
return 0;
}
