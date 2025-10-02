#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
Node *first;
void create(int val){
Node *last,*t;
t = new Node();
t->data = val;
t->next = NULL;
if (first == NULL){
    first = last = t;
}
last->next = t;
last = t;
}
void disply(Node *p){
    while(p!=0){
        cout<<p->data<<" ";
        p = p->next;
    }
}
int main (){
    create(6);
        create(1);

            create(2);
    create(5);
    create(8);
    create(6);

    disply(first);
return 0;
}
