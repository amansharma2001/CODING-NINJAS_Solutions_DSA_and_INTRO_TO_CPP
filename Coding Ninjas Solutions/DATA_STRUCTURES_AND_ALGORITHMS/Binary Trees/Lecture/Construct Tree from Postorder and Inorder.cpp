
BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
    int rootdata = postorder[postLength-1];
    
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootdata);
    
    if(postLength==1)
        return root;
    else if(postLength==0)
        return 0;
    
    int rootindex=0;
    while(inorder[rootindex]!=rootdata){
        rootindex++;
    }
    int leftLength = rootindex;
    int rightLength = inLength - rootindex - 1;
    
    root -> left = buildTree(postorder, leftLength, inorder, leftLength);
    root -> right = buildTree(postorder + leftLength, rightLength, inorder + rootindex + 1, rightLength);
    
    
    return root;
}