#include<iostream>
using namespace std;
class Node {
    public:
    Node *next;
    Node *rear = NULL;
    Node * front = NULL;
    int data;
    void enqueue(int x){
        Node *p = new Node ;
        p-> data = x;
         p->next = NULL;
            if (front == NULL){
                rear = front = p;
            } 
        else{
          rear->next = p;
          rear = p;
        }   
    }
    int dequeue(){
    Node *p = new Node;
    int x = -1;
    if (front == NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        p = front;
        front = front ->next;
        x = p->data;
    }
    free(p);
    return x;
    }
    void display(){
        Node *p = front;
        while(p!=nullptr){
            cout<<p->data<<" ";
            p=p->next;
        }
    }
};
int main ()
{
    Node *p = new Node;
    p->enqueue(10);
    p->enqueue(20);
    p->enqueue(30);
    p->enqueue(40);
    p->enqueue(50);
    p->enqueue(60);
    p->dequeue();
    p->display();
    return 0;
}