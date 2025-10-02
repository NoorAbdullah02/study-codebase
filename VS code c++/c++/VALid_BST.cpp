#include<iostream>
#include<climits>
using namespace std;
class Node{
    public:
    int data;
    Node *right,*left;
    Node(int data){
        this->data = data;
        right = NULL;
        left = NULL;
    }
};
bool isBST(Node* root, Node* min,Node* max){
    if (min!=NULL && root->data<=min->data){
        return false;
    }
    if (max!=NULL && root->data >= max->data){
        return false;
    }
    
}
int main ()
{

return 0;
}