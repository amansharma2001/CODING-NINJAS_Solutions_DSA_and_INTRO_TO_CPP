int height(BinaryTreeNode<int> *root){
    if(root==NULL)
        return 0;
    int l = height(root->left);
    int r = height(root->right);
    
    
    if(root->left==NULL || root->right==NULL)
        return 1;
    if(root->left!=NULL && root->right!=NULL)
    	return 1+ max(height(root->left),height(root->right));
    return 0;
}
bool isBalanced(BinaryTreeNode<int> *root) {
	if(root==NULL)
        return true;
    int l = height(root->left);
    int r = height(root->right);
    
    return l==r;
}