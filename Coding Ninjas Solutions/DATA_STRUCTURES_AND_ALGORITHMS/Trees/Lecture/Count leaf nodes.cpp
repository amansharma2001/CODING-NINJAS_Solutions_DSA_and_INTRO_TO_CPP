int getLeafNodeCount(TreeNode<int>* root) {
    
    if(root->children.size()==0)
        return 1;
    int n=0;
    for(int i=0;i<root->children.size();i++){
        n+=getLeafNodeCount(root->children[i]);
    }
    return n;
}