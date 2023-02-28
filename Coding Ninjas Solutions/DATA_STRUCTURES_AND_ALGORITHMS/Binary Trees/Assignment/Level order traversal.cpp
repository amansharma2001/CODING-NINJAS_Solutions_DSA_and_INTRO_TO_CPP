#include<queue>
void printLevelWise(BinaryTreeNode<int> *root) {
   if(root==NULL)
        return;
    queue<BinaryTreeNode<int>*> q ;
    q.push(root);
    q.push(NULL);
   
    while(!q.empty()){
        BinaryTreeNode<int> *front =  q.front();
        q.pop();
        if(front!=NULL){
            cout<<front->data<<" ";
            if(front->left)
	        	q.push(front->left);
     		if(front->right)
        		q.push(front->right);
        
        }
        if(front==NULL){
            if(q.empty())
                return;
            else{
                cout<<endl;
                q.push(NULL);
            }
        } 
        
    }
   
}