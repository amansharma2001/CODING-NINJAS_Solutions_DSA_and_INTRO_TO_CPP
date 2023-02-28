void printPostOrder(TreeNode<int>* root) {
    for(int i=0;i<root->children.size();i++){
        printPostOrder(root->children[i]);
    }
    
    cout<<root->data<<" ";
}