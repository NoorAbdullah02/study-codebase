#include<iostream>
#include<climits>
#include<queue>
using namespace std;
class tree{
    public:
    tree *left;
    tree *right;
    int val;
    tree(int val){
     this -> val = val;
     left = right  = nullptr;
    }
};
int size(tree *root){
    if (root == nullptr)return 0;
    return 1+size(root->left)+size(root->right);
}
int sum(tree *root){
    if (root == nullptr)return 0;
    return root->val + sum(root->left)+sum(root->right);
} 
int max(tree *root){
    if (root ==nullptr)return INT_MIN;
    return max(root->val,max(max(root->left),max(root->right)));
}
int min(tree *root){
    if (root == nullptr)return INT_MAX;
    return min(root->val,min(min(root->left),min(root->right)));
}
void display(tree *root){
if (root == nullptr)return;
cout<<root->val<<"-> ";
if (root->left!=nullptr)cout<<root->left->val<<" ";else cout<<"null ";
if (root->right!=nullptr)cout<<root->right->val; else cout<<"null ";
cout<<endl;
    display(root->left);
    display(root->right);
}
int height(tree *root){
    if (root == nullptr)return 0;
    if (root->left == nullptr && root->right == nullptr)return 0;
    return 1+max(height(root->left),height(root->right));
}
int product(tree *root){
    if (root == nullptr)return 1;
    return root->val * product(root->left)*product(root->right);
}
void nthOder(tree *root,int n){
    if (root == nullptr)return;
    if (n == 1)cout<<root->val<<" ";
    nthOder(root->left,n-1);
    nthOder(root->right,n-1);
}
void bfs(tree *root){
if (root == nullptr)return ;
queue<tree*> st;
st.push(root);
while(!st.empty()){
    tree * res = st.front();
    st.pop();
    cout<<res->val<<" ";
    if (res!=nullptr)st.push(res->left);
    if (res!=nullptr)st.push(res->right);
}cout<<endl;
}
int main (){
    tree *t = new tree(1);
    t->left = new tree(10);
    t->right = new tree(20);
    t->left->left = new tree(35);
    t->left->right = new tree(40);
    t->right->right = new tree(50);
    // display(t);
    // cout<<size(t)<<endl;
    // cout<<sum(t)<<endl;
    // cout<<max(t)<<endl;
    // cout<<height(t)<<endl;
    // cout<<min(t)<<endl;
    // cout<<product(t)<<endl;
     int level = height(t)+1;
    for (int i=1;i<=level;i++){
    nthOder(t,i);
    cout<<endl;
    }
    bfs(t);
    return 0;
}