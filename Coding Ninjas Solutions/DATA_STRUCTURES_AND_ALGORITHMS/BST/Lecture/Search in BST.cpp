bool searchInBST(BinaryTreeNode<int> *root , int k) {
    
    if(root==NULL)
        return false;
	if(root->data ==k)
        return true;
    bool res;
    if(k>root->data)
    {
        res=searchInBST(root->right,k);
    }
    if(k<root->data)
    {
        res=searchInBST(root->left,k);
    }
    
    return res;
}