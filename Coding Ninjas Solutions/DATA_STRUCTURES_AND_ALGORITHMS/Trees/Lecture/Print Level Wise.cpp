#include<queue>
using namespace std;
void printLevelWise(TreeNode<int>* root) {
    
    queue<TreeNode<int>*> q;
	q.push(root);
    
    while(q.size()!=0){
    	TreeNode<int>* front = q.front() ;
        q.pop();
        cout<<front->data<<":";
        for(int i =0;i<front->children.size();i++){
            if(i==0)
                cout<<front->children[i]->data;
            else
                cout<<","<<front->children[i]->data;
            q.push(front->children[i]);
        }    
        cout<<endl; 
    }
}