#include<iostream>
using namespace std;
class Queue{
    public:
    int front ;
    int rear ;
    int *Q;
    int size;
    Queue(int size){
    Q = new int (size); 
    front = rear = -1;
    }
    void enquequ(Queue *q, int val){
        if (q-> front == q-> size-1 ){
            cout<<"Queue is FULL"<<endl;
        }
        else {
            q-> front++;
            q-> Q[q->front] = val;
        }
    }
    int dequeue(Queue *q){
        int val;
        if (q-> rear == q-> front){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            q-> rear ++;
            return q-> Q[q->rear];
        }
        //return val;
    }
    void display(Queue *q){
  for (int i=q->rear+1;i<=q->front;i++){
    cout<<q->Q[i]<<" ";
  }
  cout<<endl;
    }
};
int main (){
    Queue *q = new Queue(5);
    q-> enquequ(q,10);
    q-> enquequ(q,20);
    q-> enquequ(q,30);
    q-> enquequ(q,40);
    q-> enquequ(q,50);
    q-> display(q);
    cout<<q->dequeue(q)<<endl;
    q->display(q);


    return 0;
}