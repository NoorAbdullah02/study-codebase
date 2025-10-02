#include<iostream>
using namespace std;
class Queue{
    int front ;
    int rear;
    int size;
    int *Q;
    public:
    Queue(int size){
        front = rear = 0;
        this -> size = size ;
        Q = new int (size);
    }
    void insert(int val){
        if( ((rear + 1) % size) == front) cout<<"Quequ is Full"<<endl;
        else{
           rear =  (rear+1) % size;
           Q[rear] = val; 
        }
    }
    int remove(){
      int val;
      if (front == rear)cout<<"Queue is Empty"<<endl;
      else{
        front = (front + 1) % size;
        val = Q[front];
      }
      return val;
    }
   void display(){
    for (int i=front + 1 ; i!= ((rear + 1) % size) ; i = ((i + 1) % size)){
        cout<<Q[i]<<" ";
    }
    cout<<endl;
   }
};
int main ()
{
    Queue *q = new Queue (6);
    q->insert(10);
    q->insert(20);
    q->insert(30);
    q->insert(40);
    q->insert(50);
    q->display();
    cout<<q->remove()<<endl;
    cout<<q->remove()<<endl;
    cout<<q->remove()<<endl;
    q->insert(85);
    q->insert(65);
    q->display();

    return 0;
}