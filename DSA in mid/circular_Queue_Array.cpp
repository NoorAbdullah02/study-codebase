#include<iostream>
using namespace std;
class CircularQueue{
public:
int arr[5];
int head = -1,tail = -1;
    void front(int val){
        if (tail == 5-1)tail = -1;
        if (tail+1 == head)cout<<"Queue is Full"<<endl;
        if (empty())head++;
        arr[++tail] = val;
    }
    void pop(){
        if (empty())cout<<("Queue is Empty");
        if (head == 5-1)head = 0;
        head++;
    }
    void top(){
        cout<<arr[head]<<endl;
    }
    void display(){
        if(head<tail){
            for (int i=head;i<=tail;i++){
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
        else{
            for (int i = head;i<5;i++){
                cout<<arr[i]<<" ";
            }
            for (int i = 0;i<tail;i++){
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
    }
    int empty(){
        if (head == -1 && tail == -1)return true;
        else return false;
    }
};
int main (){
    CircularQueue *c = new CircularQueue();
    c->front(1);
    c->front(2);
    c->front(3);
    c->front(4);
    c->front(5);
    c->pop();
    c->front(6);
    c->pop();
    c->front(10);
    c->front(99);
    c->display();
    return 0;
}