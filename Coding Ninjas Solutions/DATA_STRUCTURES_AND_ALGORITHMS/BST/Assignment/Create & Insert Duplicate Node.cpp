void insertDuplicateNode(BinaryTreeNode<int> *root) {
    if(root==NULL)
        return;
    
    if(root->left==NULL)
    {
        BinaryTreeNode<int> *left1 = new BinaryTreeNode<int>(root->data);
        root->left = left1;
    }
    
    else
    {
        BinaryTreeNode<int> *left1 = new BinaryTreeNode<int>(root->data);
        
        left1->left= root->left;
        root->left = left1;
        
        
    }
    insertDuplicateNode(root->left->left);
	insertDuplicateNode(root->right);
 
}