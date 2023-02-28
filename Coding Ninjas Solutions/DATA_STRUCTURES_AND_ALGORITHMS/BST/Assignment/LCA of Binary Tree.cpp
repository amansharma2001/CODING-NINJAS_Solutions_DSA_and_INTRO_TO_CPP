int getLCA(BinaryTreeNode <int>* root , int a, int b) {
    if(root==NULL)
        return -1;
    
    if(root->data ==a || root->data==b)
        return root->data;
    int left1=getLCA(root->left,a,b);
    int right1=getLCA(root->right,a,b);
    
    if(left1== -1 && right1== -1)
        return -1;
    
    else if (left1 != -1 && right1 == -1)
        return left1;
    else if (left1 == -1 && right1 != -1)
        return right1;
    else
        return root->data;
    
}