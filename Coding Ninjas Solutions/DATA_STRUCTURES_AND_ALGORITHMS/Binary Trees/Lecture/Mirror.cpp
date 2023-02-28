#include<bits/stdc++.h>
void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    if(root==NULL)
        return ;
    
    swap(root->left,root->right);
    
    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right);
}