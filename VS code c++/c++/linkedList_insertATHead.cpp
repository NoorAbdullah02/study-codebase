#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};
void InsertAtHead(Node *&head, int data)
{
    Node *new_node = new Node(data);
    new_node->next = head;
    head = new_node;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp!= NULL)
    {
        cout << temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}
int main()
{
    Node *head = NULL;
    InsertAtHead(head, 1);
    InsertAtHead(head, 2);
    InsertAtHead(head, 3);
    InsertAtHead(head, 4);
    display(head);
    return 0;
}