#include<iostream>
using namespace std;
class Node{
    int data;
    int *next;
     Node *front = NULL;
     Node *rear = NULL;
    public:
    void enqueue(int x){
        Node *t;
        t = new Node;
        if (t == NULL){
            cout<<"Queqe is Full"<<endl;
        }
        else if {
            t-> data = x;
            t->next = NULL;
            if (front == NULL){
                front = rear = t;
            }
        }
        else{
            rear -> next  = t;
            rear = t;
        }
    }
};
int main ()
{

    return 0;
}