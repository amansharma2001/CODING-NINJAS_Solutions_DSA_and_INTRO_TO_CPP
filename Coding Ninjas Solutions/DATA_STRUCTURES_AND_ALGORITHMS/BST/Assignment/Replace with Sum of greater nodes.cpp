int replace(BinaryTreeNode<int> *root,int sum){
    
    if(root==NULL)
        return sum;
    sum=replace(root->right,sum);
    sum+=root->data;
    root->data=sum;
    sum=replace(root->left,sum);
    
     return sum;
}
void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) {
    if(root==NULL)
        return;
	replace(root,0); 

}