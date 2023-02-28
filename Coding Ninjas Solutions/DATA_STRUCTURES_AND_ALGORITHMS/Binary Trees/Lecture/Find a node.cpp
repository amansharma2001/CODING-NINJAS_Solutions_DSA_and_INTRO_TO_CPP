
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    
    if(root==NULL)
        return false;
    if(root->data == x )
        return true;
    
    bool res1 =isNodePresent(root->left,x);
    bool res2 =isNodePresent(root->right,x);
    
    return res1!=res2;
}