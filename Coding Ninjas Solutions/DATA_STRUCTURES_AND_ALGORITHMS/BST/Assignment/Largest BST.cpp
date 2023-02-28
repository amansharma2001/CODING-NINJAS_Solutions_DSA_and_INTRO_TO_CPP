#include<bits/stdc++.h>
using namespace std;
int hight(BinaryTreeNode<int> *root){
    if(root==NULL)
        return 0;
    return 1+max(hight(root->left),hight(root->right));
}
int maxi(BinaryTreeNode<int> *root){
    if(root==NULL)
    {
        return INT_MIN;
    }
    return max(root->data,max(maxi(root->left),maxi(root->right)));
}
int mini(BinaryTreeNode<int> *root){
    if(root==NULL)
    {
        return INT_MAX;
    }
    return min(root->data,min(mini(root->left),mini(root->right)));
}
bool isBST(BinaryTreeNode<int> *root) {
    if(root==NULL)
        return true;
  int leftmax=maxi(root->left);
  int rightmin=mini(root->right);
  return (leftmax<root->data) && (rightmin>=root->data) &&  isBST(root->left) &&  isBST(root->right);

}
int largestBSTSubtree(BinaryTreeNode<int> *root) {
   if(root==NULL)
       return 0;
    if(isBST(root))
        return hight(root);
    return max(largestBSTSubtree(root->left),largestBSTSubtree(root->right));
}