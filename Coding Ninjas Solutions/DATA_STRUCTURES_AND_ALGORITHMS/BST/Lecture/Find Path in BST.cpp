vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	if(root==NULL)
        return NULL;
    
    if(root->data==data)
    {
        vector<int>* output= new vector<int>();
        output->push_back(root->data);
        return output;
    }
    
    if(root->data > data){
        vector<int>* left_output=getPath(root->left,data);
		if(left_output!=NULL){
            left_output->push_back(root->data);
            return left_output;
        }
    }
    if(root->data <data){
        vector<int>* right_output=getPath(root->right,data);
        if(right_output!=NULL){
            right_output->push_back(root->data);
            return right_output;
        }
    }
    return NULL;
    
}