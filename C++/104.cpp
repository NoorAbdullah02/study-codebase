#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};Node *first = nullptr;
void create(vector<int> &v,int n){
    Node * t, *last;
    first = new Node();
    first->data = v[0];
    first->next = NULL;
    last = first;
    for (int i=1;i<n;i++){
        t = new Node();
        t -> data = v[i];
        t -> next = NULL;
        last -> next = t;
        last = t;
    }
}
void display(Node *p){
    p = first;
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }cout<<endl;
}
int count1(Node *p){
if (p == NULL)return 0;
return 1+count1(p->next);
}
int sum(Node *p){
    int sum = 0;
while (p!=0){
    sum += p->data;
     p = p->next;
}return sum;
}
int maxele(Node *p){
    int maxele = INT_MIN;
while(p!=NULL){
    maxele = max(p->data,maxele);
    p = p->next;
}return maxele;
}
int main (){
     vector<int> v = {1,2,3,4,5,6};
     create(v,v.size());
     display(first);
     cout<<count1(first);
     cout<<sum(first);
          cout<<maxele(first);

    return 0;
}
