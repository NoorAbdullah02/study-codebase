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
    }
};
void InsertAthead(Node *&head,int data){
    Node * new_node = new Node(data);
    new_node->next = head;
    head = new_node; 
}
int main()
{
    return 0;
}