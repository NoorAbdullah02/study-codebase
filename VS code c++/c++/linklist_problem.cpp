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
void INsertAtTail(Node *&head, int data)
{
    Node *new_node = new Node(data);

    if (head==nullptr){
        head = new_node;
        return ;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    
}
void deleteAlternative (Node *&head){
    Node *curr_node = head;
    while(curr_node!=NULL&&curr_node->next!=NULL){
        Node *temp = curr_node->next;
        curr_node->next = curr_node->next->next;
        curr_node = curr_node->next;
         free(temp);

    }
}
void display(Node *&head) 
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}
int main()
{
    Node *head = NULL;
    INsertAtTail(head, 1);
    INsertAtTail(head, 2);
    INsertAtTail(head, 3);
    INsertAtTail(head, 4);
    INsertAtTail(head, 5);
    display(head);
    deleteAlternative(head);
    display(head);

    return 0;
}