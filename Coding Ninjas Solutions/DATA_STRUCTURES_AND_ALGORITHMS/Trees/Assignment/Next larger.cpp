TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    TreeNode<int>* temp=NULL;
        if(root->data > x)
        	temp=root;
    for(int i =0;i< root->children.size();i++){
        TreeNode<int>* k=getNextLargerElement(root->children[i],x);
        if(temp==NULL)
            temp=k;
        else{
        	int s=k->data-x;
        	int p=temp->data-x;
        if(p>s)
            temp==k;
        }
    }
    
    return temp;
}