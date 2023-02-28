BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
	
    if(root==NULL){
        return NULL;}
    
    if(root->left==NULL && root->right==NULL){
        root=NULL;
        return root;
    }
        
    BinaryTreeNode<int> *left = removeLeafNodes(root->left);
    root->left=left;
    BinaryTreeNode<int> *right = removeLeafNodes(root->right);
    root->right=right;
    return root;
}