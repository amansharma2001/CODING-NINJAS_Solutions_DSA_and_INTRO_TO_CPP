#include<vector>
#include<bits/stdc++.h>
using namespace std;
void second(TreeNode<int>* root, vector<TreeNode<int>*> &v){
    v.push_back(root);
    
    for(int i=0;i<root->children.size();i++){
        second(root->children[i], v);
    }
}
TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    if(root->children.size()==0){
		        return NULL;
    }
    vector<TreeNode<int>*> v;
    second(root,v);
    	
    vector<int> v1;
    for(int i=0;i<v.size();i++){
        TreeNode<int>* temp1=v[i];
        v1.push_back(temp1->data);
    }
    sort(v1.begin(),v1.end());
    int data=-1;
    for(int i=v1.size()-1;i>0;i--){
        if(v1[i-1]!=v1[i]){
            data=v1[i-1];
            break;
        }
    }
    if(data==-1){
        return NULL;
    }
    TreeNode<int>* temp= new TreeNode<int>(data);
    return temp;
}