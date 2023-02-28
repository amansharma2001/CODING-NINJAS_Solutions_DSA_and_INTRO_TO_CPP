BinaryTreeNode<int>* construct(int *input, int s,int e)
{
    int m= (s+e)/2;
    
    if(s>e)
        return 0;
    
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(input[m]);
    
    BinaryTreeNode<int>* left1 = construct(input,s,m-1);
    
    BinaryTreeNode<int>* right1 = construct(input,m+1,e);
    
    root->left = left1;
    root->right = right1;
    
    return root;
    
}
BinaryTreeNode<int>* constructTree(int *input, int n) 
{	
	int s=0;
    int e=n-1;
    BinaryTreeNode<int>* root = construct(input,s,e);
    
    return root;
    
}