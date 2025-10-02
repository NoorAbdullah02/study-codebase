#include<iostream>
using namespace std;
class Queue{
public:
int fornt;
int rear ;
int size ;
int *Q;
void create(Queue *q,int size){ // Queue *q Meanning Createing Queue Object
q->fornt = q->rear = -1;
q -> size = size;
q -> Q = new int (size);
}
void enqueue( Queue *q,int val){
    if(q->rear == q->size-1){
        cout<<"Queue is Full"<<endl;
    }
    else {
        q-> rear ++ ;
       Q[q->rear] = val;
    }
}
int dequeue(Queue *q){
    int val = -1;
    if (q-> fornt  == q-> rear ){
        cout<<"QUEQU is Empty"<<endl;
    }
    else{
        q-> fornt ++ ;
        val = Q[q->fornt];
    }
    return val;
}
void display(Queue *q){
    for (int i= q-> fornt + 1;i<=q->rear;i++ ){
        cout<<q->Q[i]<<" ";
    }
    cout<<endl;
}
};
int main (){
    Queue *q = new Queue;
    q->create(q,5);
    q->enqueue(q,10);
    q->enqueue(q,20);
    q->enqueue(q,30);
    q->enqueue(q,40);
    q->display(q);
    cout<<q-> dequeue(q)<<endl;
    q->display(q);
    return 0;
}