void replace(TreeNode<int>* root, int d){
    
    if(root==NULL)
        return;
    root->data = d;
    for(int i=0;i<root->children.size();i++){
  
        replace(root->children[i],d+1);
        
    }
}
void replaceWithDepthValue(TreeNode<int>* root) {
	replace(root,0);
}