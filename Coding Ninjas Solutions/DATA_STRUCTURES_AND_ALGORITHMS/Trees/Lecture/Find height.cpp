int getHeight(TreeNode<int>* root) {
    
    int h=0;
    
    for(int i=0;i<root->children.size();i++){
        int h1=getHeight(root->children[i]);
        if(h1>h)
            h= h1;
        
    }
    
    return h+1;
}