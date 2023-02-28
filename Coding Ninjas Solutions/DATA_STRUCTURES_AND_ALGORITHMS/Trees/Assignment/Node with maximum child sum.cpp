TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    TreeNode<int>* max=NULL;
    
    
     for(int i=0;i<root->children.size();i++)
     {
         TreeNode<int>* k=maxSumNode( root->children[i]);
         int s=0;
          for(int i=0;i<k->children.size();i++)
      {
          s+=k->children[i]->data;
      }
         if(s>max->data)max=k;
     }
    return max;
}