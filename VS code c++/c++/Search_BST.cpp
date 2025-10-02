#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this-> data = data;
        left = NULL;
        right = NULL;
    }
};
Node* Search_BST(Node* root , int key){
    if (root == NULL){
        return root;
    }
    if (root->data ==  key){
        return root;
    }
    else if ( key < root->data ){
        return Search_BST(root->left,key);
    }
   else{
        return Search_BST(root->right,key);
   }
}
Node* inorderSucc(Node* root){
    Node * curr = root;
    while(curr&& curr-> left!=NULL){
        curr = curr->left;
    }
    return curr;
}
Node* deleteInBST(Node* root,int key){
    if (key<root->data){
        root->left = deleteInBST(root->left,key);
    }
    else if (key>root->data){
        root->right = deleteInBST(root->right,key);
    }
    else{
        if (root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
           Node* temp = root->left;
           free(root);
           return temp;
        }
        else{
            Node* temp = inorderSucc(root->right);
            root->data = temp->data;
            root->right = deleteInBST(root->right,key);
        }
    }
    return root;
}
void inorder(Node* root){
    if (root==NULL){
        return;
    } 
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main ()
{
    Node *root = new Node(4);
     root->left = new Node(2);
     root->left->left = new Node(1);
     root->left->right = new Node(3);
     root->right = new Node(5);
     root->right->right = new Node (6);
    //  if (Search_BST(root,1)!=NULL){
    //     cout<<"Key Found"<<endl;
    //  }
    //  else{
    //     cout<<"Not Found"<<endl;
    //  }
    inorder(root);
    cout<<endl;
    root = deleteInBST(root,3);
    inorder(root);

    return 0;
}