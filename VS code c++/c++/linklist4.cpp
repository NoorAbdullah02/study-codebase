#include<iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
    Node(int data):data(data),next(NULL){

    }
};
class Linklist{
    public:
    Node *head = NULL;
    void insertAtTail(int data){
       Node *new_node = new Node (data) ;
       if (head == NULL){
        head = new_node;
        return;
       }
    Node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    }
    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    int getlenth(Node * head){
        Node *temp = head;
        int lenth = 0;
        while(temp!=NULL){
         lenth++;
         temp = temp->next;
        }
        return lenth;
    }
    Node* moveAhead(Node *head,int z){
     Node *temp  = head;
     while(z--){
        temp = temp->next;
     }
    return temp;
    }
    Node* intersection(Node *head,Node *head1){
        int l1 = getlenth(head);
        int l2 = getlenth(head1);
      Node * ptr1,*ptr2;
        if (l1>l2){
            int k = l1-l2;
           ptr1 = moveAhead(head,k);
           ptr2 = head1;
        }
        else{
          int k = l2-l1;
          ptr1 = head;
          ptr2 = moveAhead(head1,k);
        }
        while(ptr1!=NULL){
            if (ptr1==ptr2){
                return ptr1;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
    }
};
int main ()
{
Linklist l1,l2;
l1.insertAtTail(1);
l1.insertAtTail(2);
l1.insertAtTail(3);
l1.insertAtTail(4);
l1.insertAtTail(5);
l1.display();
l2.insertAtTail(6);
l2.insertAtTail(7);
 l2.head->next->next = l1.head->next->next->next;
l2.display();
Node * intersec = l1.intersection(l1.head,l2.head);
if (intersec!=NULL){
    cout<<intersec->data<<"->";
}
else{
    cout<<"-1"<<endl;
}
    return 0;
}