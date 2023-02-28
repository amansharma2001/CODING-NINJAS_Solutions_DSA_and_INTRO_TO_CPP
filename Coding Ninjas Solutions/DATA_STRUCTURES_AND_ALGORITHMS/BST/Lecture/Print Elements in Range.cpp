#include<vector>
#include<bits/stdc++.h>
void range(BinaryTreeNode<int>* root, int k1, int k2,vector<int> &v)
{
    if(root==NULL)
        return;
    
    if (k1 < root->data && k2 < root->data){
        range(root->left, k1, k2,v);
    }
        
    if (k1 > root->data && k2 > root->data){
        range(root->right, k1, k2,v);
        
    }
    if(root->data >=k1 && root->data <=k2){
         v.push_back(root->data);
		
        range(root->left,k1,k2,v);
        range(root->right,k1,k2,v);
    }
    
    
}
void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
    
    if(root==NULL)
        return;
    vector<int> v;
    range(root,k1, k2,v);
    
    sort(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}