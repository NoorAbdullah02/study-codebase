#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node *first = NULL;
    void create(vector<int> &v){
    int n = v.size();
    Node *temp;
    first = new Node ;
    first -> data = v[0];
    first->next = NULL;
    temp = first;
    for (int i=1;i<n;i++){
        Node * t;
        t = new Node;
        t->data = v[i];
        t->next = nullptr;
        temp->next = t;
        temp = t;
    }
}
    void display(Node *q ){
    if (q == NULL) return;
    cout<<q->data<<" ";
    display(q->next);
    }
    int add(Node *p){
        int sum = 0;
        while(p!=nullptr){
            sum += p->data;
            p=p->next;
        }
        return sum;
    }//iterative Solution
    int sum(Node *p){
       static int sum1 = 0;
        if (p==nullptr){
            return 0;
        }
        sum1 +=p->data; 
        sum(p->next);
        return sum1;
    }// Recersive Sum
    int maxelement(Node *p){
        int max1 = INT_MIN;
        while (p!=NULL){
          max1 = max(p->data,max1);
          p = p->next;
        }
        return max1;
    }//Iterative Solution
    int Rmaxelement(Node *q){// R = Recersive
   static int max1 = INT_MIN;
      if (q == nullptr)return 0 ;
      max1 = max(q->data,max1);
      Rmaxelement(q->next);
      return max1;
    }
    bool search(Node *p){
        bool check = false;
        while(p!=nullptr){
            if (p->data == 12){
                check = true;
                break;
            }
            else {
                p = p->next;
            }
        }
       if (check){
        cout<<"Number is Found"<<endl;
       }
       else {
        cout<<"Not Found"<<endl;
       }
    } //Iteration
    bool Rcheck(Node *p){
        static bool check = false;
        if (p == nullptr){
            return 0;
        }
        if (p->data == 12){
            check = true;
        }
        else Rcheck(p->next);
        return check;
    }
    void Linear_search(Node *p,int val){ // good Complexity
     Node *q;
     while(p!=nullptr){
        if (p->data == val){
            q->next = p->next;
            p->next = first;
            first = p;
        }
        q = p;
        p = p->next;
     }
    }
};

int main (){
Node *p = new Node;
vector<int> v = {10,25,36,5,4,8,6,1,5,12};
p->create(v);
p->display(p->first);
cout<<p->sum(p->first)<<endl;
cout<<p->add(p->first)<<endl;
cout<<p->maxelement(p->first)<<endl;
cout<<p->Rmaxelement(p->first)<<endl;
p->search(p->first);
int res = p->Rcheck(p->first);
if (res){
        cout<<"Number is Found"<<endl;
       }
       else {
        cout<<"Not Found"<<endl;
       }
p->Linear_search(p->first,8);
p->display(p->first);

return 0;
}