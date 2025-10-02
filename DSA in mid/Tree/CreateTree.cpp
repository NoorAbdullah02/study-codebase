 #include<iostream>
 using namespace std;
 class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node (int val){
        this->val = val;
        left = right = nullptr;
    }
 };
 void display(Node *root){
   if (root  == nullptr)return ;
  cout<<root->val<<"-> ";
  if(root->left!=nullptr)cout<<root->left->val<<" ";
  else cout<<"null ";
  if(root->right!=nullptr)cout<<root->right->val<<" ";
  else cout<<"null "<<endl;
  cout<<endl;
  display(root->left);
  display(root->right);
 }
 int main (){
    Node *root = new Node(2);
    Node *a = new Node (4);
    Node *b = new Node (10);
    root->left = a;root->right = b;
    Node *c = new Node (6);
    Node *d = new Node(5);
    Node *e = new Node(11);
    a->left = c;a->right = d;
    b->right = e;
    display(root);

    return 0;
 }