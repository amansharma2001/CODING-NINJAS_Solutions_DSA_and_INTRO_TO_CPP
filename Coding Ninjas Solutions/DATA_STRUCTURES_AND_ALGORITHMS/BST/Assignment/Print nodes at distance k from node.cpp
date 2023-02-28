void subtreenodes(BinaryTreeNode<int> *root, int k){
    if(root==NULL || k<0 ){
        return;
    }
    if(k==0){
        cout<<root->data<<endl;
        return;
    }
       
    if(root->left)
        subtreenodes(root->left,k-1);
    if(root->right)
        subtreenodes(root->right,k-1);
}

int printNodes(BinaryTreeNode<int> *root, int node, int k){
    if(root==NULL)
        return -1;
    
    if(root->data==node)
    {
        subtreenodes(root,k);
        return 0;
    }
    
    int dl = printNodes(root->left,node,k);
    if(dl!= -1)
    {
        if(dl+1 ==k)
        {
            cout<<root->data<<endl;
        }
        else
            subtreenodes(root->right,k-dl-2);
        
        return 1+dl;
    }
    
    int dr= printNodes(root->right,node,k);
    if(dr!= -1)
    {
        if(dr+1 ==k)
        {
            cout<<root->data<<endl;
        }
        else
            subtreenodes(root->left,k-dr-2);
        
        return 1+dr;
    }
    
    return -1;
}

void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k) {
    // Write your code here
    int level= 0;
    printNodes(root,node,k);
    
}