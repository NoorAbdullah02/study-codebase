#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    Node *left;
    Node *right;
    int data;
    Node(int data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
void preorder(Node *p){
    if (p == NULL)return;
    cout<<p->data<<" ";
    preorder(p->left);
    preorder(p->right);
}
void inorder(Node *p){
    if(p == NULL)return;
    inorder(p->left);
    cout<<p->data<<" ";
    inorder(p->right);
}
void postorder(Node *p){
    if (p == NULL)return;
    postorder(p->left);
    postorder(p->right);
    cout<<p->data<<" ";
}
vector<int> LevelOrder(Node* root) {
    vector<int> result;
    if (!root) return result;
    
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        result.push_back(current->data);
        
        if (current->left) q.push(current->left);
        if (current->right) q.push(current->right);
    }
    
    return result;
}
vector<int> PreorderI(Node* root) {
    vector<int> result;
    if (!root) return result;

    stack<Node*> s;
    s.push(root);

    while (!s.empty()) {
        Node* current = s.top();
        s.pop();
        result.push_back(current->data);

        // Push right child first so that left child is processed first
        if (current->right) s.push(current->right);
        if (current->left) s.push(current->left);
    }

    return result;
}
vector<int> Inorder1(Node* root) {
    vector<int> result;
    stack<Node*> s;
    Node* current = root;

    while (current != nullptr || !s.empty()) {
        // Reach the left most Node of the current Node
        while (current != nullptr) {
            s.push(current);
            current = current->left;
        }

        // Current must be NULL at this point
        current = s.top();
        s.pop();
        result.push_back(current->data);

        // Visit the right subtree
        current = current->right;
    }

    return result;
}
vector<int> Postorder1(Node* root) {
    vector<int> result;
    if (!root) return result;

    stack<Node*> s1, s2;
    s1.push(root);

    while (!s1.empty()) {
        Node* current = s1.top();
        s1.pop();
        s2.push(current);

        if (current->left) s1.push(current->left);
        if (current->right) s1.push(current->right);
    }

    while (!s2.empty()) {
        Node* node = s2.top();
        s2.pop();
        result.push_back(node->data);
    }

    return result;
}
int main ()
{
    Node *p = new Node(1);
    p->left = new Node(2);
    p->right = new Node(3);
    p->left->left = new Node(4);
    p->left->right = new Node(5);
    p->right->left = new Node(6);
    p->right->right = new Node(7);
    p->left->right->left = new Node (8);
    p->right->right->left = new Node(9);
    p->right->right->right = new Node(10);
    cout<<"preorder is : ";
    preorder(p);
    cout<<endl;
    cout<<"Inorder is : ";
    inorder(p);
    cout<<endl;
    cout<<"Postorder is : ";
    postorder(p);
    cout<<endl;
    vector<int> result = Postorder1(p);
    for (int val : result){
        cout<<val<<" ";
    }
    

    return 0;
}