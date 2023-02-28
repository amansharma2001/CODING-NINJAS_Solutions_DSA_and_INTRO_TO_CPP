int getSum(BinaryTreeNode<int>* root) {
    if(root==NULL)
        return NULL;
    
    return root->data + getSum(root->left)+getSum(root->right);
}