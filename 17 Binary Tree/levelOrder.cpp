#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = right = NULL;
    }
};
node* buildTree(){
    int d;
    cin >> d;
    if(d == -1){
        return NULL;
    }
    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void levelOrder(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *temp = q.front();
        if(temp == NULL){
            q.pop();
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            q.pop();
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
int height(node* root){
    if(root == NULL){
        return 0;
    }
    return 1+ max(height(root->left), height(root->right));
}
int diameter(node* root){
    if(root == NULL){
        return 0;
    }
    int D1 = height(root->left) + height(root->right);
    int D2 = diameter(root->left);
    int D3 = diameter(root->right);
    return max(D1, D2, D3);
}
int main(){
    node* root = buildTree();
    // levelOrder(root);
    cout << endl;
    cout << diameter(root) << endl;
    return 0;
}