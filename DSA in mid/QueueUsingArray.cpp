#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
int v[100];
int head = -1;
int tail = -1;
void push(int val){
if (empty())head++;
v[++tail] = val;
}
void pop(){
    if(head > tail){cout<<"Queue is Empty"<<endl;return;}
    head++;
}
void top(){
    cout<<v[head]<<endl;
}
void display(){
    if (head == -1)cout<<"Queue is Empty"<<endl;
    for(int i=head;i<=tail;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}
int empty(){
if (head == -1 && tail == -1)return true;
else return false;
}
};
int main(){
Queue q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
q.display();
q.top();
q.pop();
q.display();
q.top();
    return 0;
}