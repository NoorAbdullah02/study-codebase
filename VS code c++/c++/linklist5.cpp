#include<iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
    Node(int data):data(data),next(NULL){}
    
};
class linklist{
    public:
    Node *head = NULL;
    void insertAtTail(int val){
        Node *new_node = new Node (val);
        if (head == NULL){
            head = new_node ;
            return;
        }
        Node*temp = head;
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
    void deleteAtposFl(Node *&head,int k){
        Node *ptr1 = head,*ptr2 = head;
        int count = k;
        while(count-->0){
            ptr2 = ptr2->next;
        }
        while(ptr2->next!=NULL){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        while(ptr2 == NULL){
            Node*temp = head;
            head = head->next;
            free(temp);
        }
        Node *temp = ptr1->next;
        ptr1->next = ptr1->next->next;
        free(temp);
    }
};
int main ()
{
    linklist l1;
    l1.insertAtTail(1);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.display();
    l1.deleteAtposFl(l1.head,3);
    l1.display();
    return 0;
}













