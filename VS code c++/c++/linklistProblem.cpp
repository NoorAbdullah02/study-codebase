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
    void InsertATtail(int data)
    {
        Node *new_node = new Node(data);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
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
        }
        cout<<"NULL"<<endl;
    }
    void deleteAlternate(Node *head){
        Node* new_node = head;
        while(new_node!=NULL&&new_node->next!=NULL){
            Node *temp = new_node ->next;
            new_node->next = new_node->next->next;
            free(temp);
            new_node = new_node->next;
        }
    }
};

int main()
{
    Linklist l;
    l.InsertATtail(1);
    l.InsertATtail(5);

    l.InsertATtail(1);

    l.InsertATtail(6);
    l.display(l.head);
    l.deleteAlternate(l.head);
    l.display(l.head);

    return 0;
}