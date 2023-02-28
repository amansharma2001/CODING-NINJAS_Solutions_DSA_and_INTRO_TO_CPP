BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    
    int rootdata = preorder[0];
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootdata);
    
    if(preLength == 1)     
        return root;
    else if(preLength == 0)
        return NULL;
     
	int rootindex=0;
    while(inorder[rootindex]!=rootdata){
        rootindex++;
    }
    int leftLength = rootindex;
    int rightLength = inLength - rootindex  - 1;
    
    BinaryTreeNode<int>* left = buildTree(preorder+1,leftLength,inorder,leftLength);
    BinaryTreeNode<int>* right = buildTree(preorder+leftLength+1,rightLength,inorder+1+leftLength,rightLength);
    
    root->left =left;
    root->right=right;
    
    return root;
}