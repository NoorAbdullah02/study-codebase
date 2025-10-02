#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    void insertAtTail(int value)
    {
        Node *new_node = new Node(value);
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
    void display()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
void deleteAlternateNodes(Node *&head)
{
    Node *cur_node = head;
    while (cur_node != NULL && cur_node->next != NULL)
    {
        Node *temp = cur_node->next;
        cur_node->next = cur_node->next->next;
        free(temp);
        cur_node = cur_node->next;
    }
}
void deleteDublicateNode(Node *&head)
{
    Node *cur_node = head;
    while (cur_node != NULL)
    {
        while (cur_node->next && cur_node->val == cur_node->next->val)
        {
            Node *temp = cur_node->next;
            cur_node->next = cur_node->next->next;
            free(temp);
        }
        cur_node = cur_node->next;
    }
}
void Reverse(Node *head)
{
    // Base Case
    if (head == NULL)
    {
        return;
    }
    Reverse(head->next);
    cout << head->val << "->";
}
Node *reverseLL(Node *&head)
{
    Node *prevptr = NULL;
    Node *curptr = head;
    while (curptr != NULL)
    {
        Node *nextptr = curptr->next;
        curptr->next = prevptr;
        prevptr = curptr;
        curptr = nextptr;
    }
    Node *new_head = prevptr;
    return new_head;
}
Node *reverseLinkedListRecursively(Node *&head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {

        return head;
    }
    Node *new_head = reverseLinkedListRecursively(head->next);
    head->next->next = head;
    head->next = NULL;
    return new_head;
}
Node *reverseby2(Node *&head, int k)
{
    Node *prevptr = NULL;
    Node *curptr = head;
    int count = 0;
    while (curptr != NULL && count < k)
    {
        Node *nextptr = curptr->next;
        curptr->next = prevptr;
        curptr = nextptr;
        count++;
    }
    if (curptr != NULL)
    {
        Node *new_head = reverseby2(curptr, k);
        head->next = new_head;
    }
    return prevptr;
}
bool cheak_in_the_list(Node *head, Node *head1)
{
    Node *ptr = head;
    Node *ptr1 = head1;
    while (ptr == NULL && ptr1 == NULL)
    {
        if (ptr->val != ptr1->val)
        {
            return false;
        }
        ptr = ptr->next;
        ptr1 = ptr1->next;
    }
    return (ptr == NULL && ptr1 == NULL);
}
int getlenth(Node *head)
{
    Node *temp = head;
    int lenth = 0;
    while (temp != NULL)
    {
        lenth++;
        head = temp->next;
    }
    return lenth;
}
Node *moveaHeadbyk(Node *head, int k)
{
    Node *ptr = head;
    while (k--)
    {
        ptr = ptr->next;
    }
    return ptr;
}
Node *getInersection(Node *head1, Node *head2)
{
    int l1 = getlenth(head1);
    int l2 = getlenth(head2);
    Node* ptr1, *ptr2;
    if (l1 > l2)
    {
        int k = l1 - l2;
        ptr1 = moveaHeadbyk(head1, k);
        ptr2 = head2;
    }
    else
    {
        int k = l2 - l1;
        ptr1 = head1;
        ptr2 = moveaHeadbyk(head2, k);
    }
    while (ptr1)
    {
        if (ptr1 == ptr2)
        {
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
}
void removekthNodeFromEnd(Node*&head,int k){
    Node* ptr1 = head;
    Node* ptr2 = head;
    int count = k;
    while(count--){
        ptr2 = ptr2->next;
    }
    if (ptr2==NULL){
        Node* temp = head;
        head  = head->next;
        free(temp);
        return ;
    }
    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    Node* temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);
    
}
int main()
{
    LinkedList ll, l1;
    ll.insertAtTail(1);
    // ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    l1.insertAtTail(7);
    ll.display();
    
    // l1.head->next->next = l1.head->next->next->next;
    // Node* intersection = getInersection(ll.head,l1.head);
    // //   cout<< cheak_in_the_list(ll.head,l1.head);
    // // deleteAlternateNodes(ll.head);
    // // ll.display();
    // // deleteDublicateNode(ll.head);
    // // ll.display();
    // // Reverse(ll.head);
    // // ll.head = reverseLinkedListRecursively(ll.head);
    // // ll.display();
    // // ll.head = reverseby2(ll.head,3);
    // // ll.display();
    // if (intersection){
    //     cout<<intersection->val<<endl;
    // }
    // else{
    //     cout<<"-1"<<endl;
    // }
    // removekthNodeFromEnd(ll.head,6);
    // ll.display();
    return 0;
}