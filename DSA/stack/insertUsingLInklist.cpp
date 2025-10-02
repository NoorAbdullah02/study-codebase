#include<iostream>
using namespace std;
class Stack{
    public:
    Stack * s;
    Stack *next;
   // int size;
    int data;
    
    Stack(){
        
        //next = nullptr;
        s = nullptr;
    }
void push(int val){
    Stack *top = new Stack;
    //top->next = NULL;
    top-> data = val;
    top->next = s;
    s = top;
}
int pop(){
    int x = -1;
    if (s == nullptr)return -1;
    Stack *s1;
    s1 = s;
    x = s1->data; 
    s  = s->next;
   // x = s1->data;
    free(s1);
    return x;
}
void display(){
    Stack *p = s;
while(p!=nullptr){
    cout<<p->data<<" ";
    p = p->next;
}
}
int peek(int pos){
Stack *s1 = new Stack;
int x = -1;
s1 = s;
for (int i=0;i<pos-1;i++){
    s1 = s1->next;
}
x = s1->data;
return x;
}
};
int main ()
{
    Stack *s = new Stack;
    s->push(10);
    s->push(20);
    s->push(30);
    s->push(40);
    s->push(50);
    s->display();
    cout<<s->peek(1)<<endl;
 
return 0;
}