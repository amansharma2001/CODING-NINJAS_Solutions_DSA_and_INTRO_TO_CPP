#include<vector>
using namespace std;
void leaf(BinaryTreeNode<int> *root, int k,vector<int>v ,bool b)
{
    if(root==NULL && k==0 && b==true)
    {
      for(int i=0;i<v.size();i++) 
        cout<<v[i]<<" ";
       cout<<endl;
        return ;
    }
    if(root==NULL)
        return ;
     v.push_back(root->data);
    k=k-root->data;

        leaf(root->left,k,v,true);

        leaf(root->right,k,v,false);
    return;
}
void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
    vector<int>v;
    leaf(root,k,v,true);
}