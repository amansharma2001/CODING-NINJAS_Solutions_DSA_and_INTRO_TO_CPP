#include <utility>
#include <vector>
#include <bits/stdc++.h>
void pair1(BinaryTreeNode<int>* root,vector<int> &v)
{
    if(root==NULL)
        return ;
    
    v.push_back(root->data);
    if(root->left)
        pair1(root->left,v);
    if(root->right)
        pair1(root->right,v);
    
}
void pairSum(BinaryTreeNode<int> *root, int sum) {
    
    if(root==NULL)
        return;
    
    vector<int>v;
    
    pair1(root,v);
    sort(v.begin(),v.end());
    int j=v.size()-1;
    int i=0;
    while(i<j)
    {
        int s = v[i]+v[j];
        if(s==sum){
            cout<<v[i]<<" "<<v[j]<<endl;
            i++,j--;
        }
        else if(s < sum) i++;
        else j--;
    }
    
}