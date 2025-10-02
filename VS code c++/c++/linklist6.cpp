#include<iostream>
using namespace std;
class Node {
    public:
    Node *next;
    int data;
    Node(int data):data(data),next(NULL){}
    
};
class LINKlist{
    public:
    Node *head = NULL;
    void insertAtTail(int data){
        Node *new_node = new Node (data);
        if (head == NULL){
            head = new_node;
            return;
        }
        Node *temp = head;
        while(temp->next){
            temp=temp->next;
        }
        temp->next = new_node;
    }
    void display(){
        Node*temp = head;
        while(temp){
            cout<<temp->data<<"->";
            temp = temp->next; 
        }cout<<"NULL"<<endl;
    }
    };
    Node* mergeLINKlist(Node *&head,Node *&head1){
        Node* dummy_node = new Node(-1);
        Node *ptr1 = head;
        Node* ptr2 = head1;
        Node* ptr3 = dummy_node;
        while(ptr1!=NULL&&ptr2!=NULL){
        if (ptr1->data<ptr2->data){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
    }
    else{
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
    }
    ptr3 = ptr3 ->next;
        }
    if (ptr1!=NULL){
      ptr3->next = ptr1;
    }
    else{
        ptr3->next = ptr2; 
    }
    return dummy_node->next;
};
int main ()
{
    LINKlist ll1,ll2;
    ll1.insertAtTail(1);
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);
    ll1.insertAtTail(21);
    ll1.insertAtTail(2);
    ll1.display();
    ll2.insertAtTail(6);
    ll2.insertAtTail(8);
    ll2.insertAtTail(7);
    ll2.insertAtTail(6);
    ll2.display();
    LINKlist ll3;
    ll3.head = mergeLINKlist(ll1.head,ll2.head);
    ll3.display();
  return 0;
} 