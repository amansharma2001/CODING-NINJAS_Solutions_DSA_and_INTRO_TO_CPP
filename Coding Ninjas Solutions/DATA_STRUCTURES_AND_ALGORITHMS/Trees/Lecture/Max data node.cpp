
TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    if(root==NULL)
        return NULL;
    
    TreeNode<int>* max =root;
    
    for(int i =0;i<children.size();i++){
        TreeNode<int>* k= maxDataNode(root->children[i]);
        
        if(k->data > max->data)
            max = k;
    }
    return max;
}
