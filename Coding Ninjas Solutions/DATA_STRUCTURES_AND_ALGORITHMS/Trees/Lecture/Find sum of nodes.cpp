
int sumOfNodes(TreeNode<int>* root) {
    int sum =root->data;
    
    for(int i =0;i<root->children.size();i++){
        sum += sumOfNodes(root->children[i]);
    }
    return sum;
}