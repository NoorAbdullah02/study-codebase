#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class stack{
    vector<int> v;
    //int v[5];
    int idx = 0;
    public:
    void push(int x){
    if(isFull()){
        cout<<"Vector is Full"<<endl;
        return;
        }
     v.push_back(x);
     idx++;
    }
    void pop(){
        if (idx == 0){cout<<"Vector is Empty";return;}
        idx--;
    }
    void top(){
        if (idx == 0)cout<<"Vector is Empty"<<endl;
        cout<<v[idx-1]<<endl;
    }
    void display(){
        
        for (int i=0;i<idx;i++){
            cout<<v[i]<< " ";
        }cout<<endl;
    }
    void size(){
        cout<<idx<<endl;
    }
    bool is_Empty(){
        if (idx == 0)return true;
        return false;
    }
    bool isFull(){
        int max_size = 5;
        if(idx == max_size)return true;
        return false;
    }
    void search(int x){
        for (int i=0;i<idx;i++){
            
    }
}
};//lifo
int main (){
    stack *st = new stack;
    
    st->push(10);
    st->push(20);
    st->push(2);
    st->push(30);
    st->push(40);
     st->display();
    st->top();
  
    cout<<st->is_Empty()<<endl;
    return 0;
}