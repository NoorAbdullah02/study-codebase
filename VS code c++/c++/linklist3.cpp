#include<iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
    Node (int data){
        this-> data = data;
        next = NULL;
    }
};
class Linklist{
    public:
    Node *head = NULL;
    void InsertAtTail(int data){
        Node *new_node = new Node (data);
        if (head == NULL)
        {
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
        }cout<<"NULL"<<endl;
    }
    void reverse(Node *head){
        if (head == NULL){
            return;
        }
        reverse(head->next);
        cout<<head->data<<"->";
    }
    void reversePrint(){
        reverse(head);
        cout<<"NULL"<<endl;
    }
    Node* recersive(Node *&head){
        //base case
        if (head== NULL || head->next==NULL){
            return head;
        }
        //recersive case
        Node *new_node = recersive(head->next);
        head->next->next = head;
        head->next = NULL;
        return new_node; 
    }
    Node *reverseKLL(Node* &head,int k){
        Node *prevptr = NULL;
        Node *currptr = head;
        int count = 0;
        while(currptr!=NULL && count<k){
            Node* nextptr = currptr->next;
            currptr->next = prevptr;
            prevptr = currptr;
            currptr = nextptr;
            count++;
        }
        if (currptr!=NULL){
            Node * new_node = reverseKLL(currptr,k);
            head->next = new_node;
        }
        return prevptr;
    }  
};
int main ()
{
    Linklist l;
    for (int i=0;i<5;i++){
        int a;
        cin>>a;
        l.InsertAtTail(a);
    }
    l.display();
    // l.reversePrint();
    // l.head = l.recersive(l.head);
    // l.display();
    l.head = l.reverseKLL(l.head,3);
    l.display();
    return 0;
}