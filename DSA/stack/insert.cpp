#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int *s;
    int top ;
    Stack(int size){
    this->size = size;
    top = -1;
    s = new int (size);
    }
    void insert(int data){
        if (top == size-1)cout<<"Stack is Full"<<endl;
        else{
            top++;
            s[top] = data;
        }
    }
    int remove(){
        int x = -1;
        if (top == -1)cout<<"Stack is Empty"<<endl;
        else{
            x = s[top];
            top--;
        }
        return x;
    }
    void display(){
        if (top == -1)cout<<"Stack is Empty"<<endl;
        for (int i = top;i>=0;i--){
            cout<<s[i]<<" ";
        }
    }
    int peck(int pos){
        int x = -1;
        if (top == -1)cout<<"Stack is Empty"<<endl;
        else {
            x = s[top-pos+1];
        }
        return x;
    }
};
int main ()
{
    Stack *s = new Stack(5) ;
    s->display();
    s->insert(10);
    s->insert(20);
    s->insert(30);s->insert(40);s->insert(50);
    cout<<s->remove()<<endl;
    s->display();
    cout<<s->peck(3);

    return 0; 
}