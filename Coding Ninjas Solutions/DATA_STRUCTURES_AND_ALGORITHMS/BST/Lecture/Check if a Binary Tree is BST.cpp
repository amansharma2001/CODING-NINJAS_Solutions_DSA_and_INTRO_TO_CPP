int minimum(BinaryTreeNode<int> *root){
    if(root==NULL){
        return INT_MAX;
    }
    
    int leftMin = minimum(root->left);
    int rightMin = minimum(root->right);
    
    return min(root->data, min(leftMin, rightMin));
}

int maximum(BinaryTreeNode<int> *root){
    if(root==NULL){
        return INT_MIN;
    }
    
    int leftMax = maximum(root->left);
    int rightMax = maximum(root->right);
    
    return max(root->data, max(leftMax, rightMax));
}

bool isBST(BinaryTreeNode<int> *root) {
	if(root==NULL){
        return true;
    }
    
    int leftMax = maximum(root->left);
    int rightMin = minimum(root->right);
    
    bool smallAns = (root -> data > leftMax && root -> data <= rightMin);
    
    bool leftAns = isBST(root->left);
    bool rightAns = isBST(root->right);
    
    return smallAns and leftAns and rightAns;
}