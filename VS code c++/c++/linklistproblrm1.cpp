#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    int data;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class Linklist
{
public:
    Node *head = NULL;
    void insertAtTail(int data)
    {
        Node *new_node = new Node(data);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display(Node *head)
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;
    }
    void deleteAlter(Node *head){
        Node *temp = head;
        while(temp!=NULL){
            while ( temp->next!=NULL&&temp->data == temp->next->data){
                Node *new_node = temp->next;
                temp->next =  temp->next->next;
                free(new_node);
        }
              temp = temp->next;

        
    }
    }

};

int main()
{
    Linklist l;
    l.insertAtTail(1);
    l.insertAtTail(2);
    l.insertAtTail(2);
    l.insertAtTail(3);
    l.insertAtTail(3);
    l.insertAtTail(4);

    l.display(l.head);
    l.deleteAlter(l.head);
    l.display(l.head);

    return 0;
}