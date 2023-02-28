#include<climits>
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	if(root==NULL){
        
        return pair<INT_MAX,INT_MIN>;
    }
    pair<int,int> p;
    pair<int,int> leftAns = getMinAndMax(root->left);
    pair<int,int> rightAns = getMinAndMax(root->right);
    
	int lmin=leftAns.first;
    int rmin=rightAns.first;
	int lmax=leftAns.second;
    int rmax=rightAns.second;
    
    int min1 = min(min(lmin,rmin),root->data);
    int max1 = max(max(lmax,rmax),root->data);
    
    p.first=min1;
    p.second= max1;
    
    return p;
}