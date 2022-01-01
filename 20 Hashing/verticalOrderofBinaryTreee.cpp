#include<iostream>
#include<vector>
#include<map>
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
node* newNode(int d){
    node* n = new node(d);
    return n;
}
void getVerticalOrder(int hd, map<int, vector<int> >&mp, node* root){
    // base case
    if(root == NULL){
        return;
    }
    mp[hd].push_back(root->data);
    getVerticalOrder(hd-1, mp, root->left);
    getVerticalOrder(hd+1, mp, root->right);
}
int main(){
    node* root = NULL;
    root = newNode(10);
    root->left = newNode(7);
    root->right = newNode(4);
    root->left->left = newNode(3);
    root->left->right = newNode(11);
    root->right->left = newNode(14);
    root->right->right = newNode(6);
    
    map<int, vector<int> > mp;
    
    int hd = 0;
    getVerticalOrder(hd, mp, root);
    map<int, vector<int> > :: iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        for(int i=0;i<(it->second).size();it++){
            cout << (it->second)[i] << " ";
        }
        cout << endl;
    }
    return 0;
}