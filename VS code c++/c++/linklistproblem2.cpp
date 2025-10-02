#include<iostream>
using namespace std;
class Node {
    public:
    Node *next;
    int data;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class Linklist{
    public:
    Node *head = NULL;
    void InsertAtTail(int val){
        Node *new_node = new Node (val);
        if (head == nullptr){
            head = new_node ;
            return ;
        }
        Node *temp = head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next = new_node;
    }
    void deleteDublicate(Node *&head){
        Node *temp = head;
        while(temp!=NULL&&temp->next!=NULL){
            if (temp->data == temp->next->data){
                Node *tem = temp->next;
                temp->next = temp->next->next;
                free(tem);
            }
            temp = temp->next;
        }
    }
    void display(Node *head){
Node *temp = head;
while(temp!=nullptr){
    cout<<temp->data<<"->";
    temp = temp->next; 
}cout<<"NULL"<<endl;
    }

};
int main ()
{
    Linklist l;
    l.InsertAtTail(1);
    l.InsertAtTail(1);
    l.InsertAtTail(2);
    l.InsertAtTail(2);
    l.InsertAtTail(3);
    l.InsertAtTail(4);
    l.InsertAtTail(4);
    l.display(l.head);
    l.deleteDublicate(l.head);
    l.display(l.head);
    return 0;
}