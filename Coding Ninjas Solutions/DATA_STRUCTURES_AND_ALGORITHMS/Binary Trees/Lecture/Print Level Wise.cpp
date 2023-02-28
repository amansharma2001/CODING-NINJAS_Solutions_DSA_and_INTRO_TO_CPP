#include <queue>
void printLevelWise(BinaryTreeNode<int> *root) {
	
    if(root==NULL)
        return;
    queue<BinaryTreeNode<int>*> pn;
    pn.push(root);
    
    while(!pn.empty())
    {

        BinaryTreeNode<int> *front = pn.front();
        pn.pop();
        cout<<front->data<<":";
        if(front->left !=NULL)
        {
            cout<<"L:"<<front->left->data<<",";
            pn.push(front->left);
        }
        else 
            cout<<"L:-1"<<",";
        
        if(front->right!=NULL)
        {
            cout<<"R:"<<front->right->data<<endl;
        	pn.push(front->right);
        }
        else 
            cout<<"R:-1"<<endl;
        
    }
  	
}