#include<bits/stdc++.h>
#include<vector>
void construct(BinaryTreeNode<int>* root,vector<int> &v)
{
    if(root==NULL)
        return ;
    
    v.push_back(root->data);
    if(root->left)
        construct(root->left,v);
    if(root->right)
        construct(root->right,v);
    
}
Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
    if(root==NULL)
        return NULL;
	vector<int> v ;
    construct(root,v);
    
    sort(v.begin(),v.end());
    
    Node<int>*head=NULL;
    Node<int>*tail=head;
    for(int i=0;i<v.size();i++)
    {
        Node<int>* temp = new Node<int>(v[i]);
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        tail->next=temp;
        tail=temp;
        
    }
    tail->next=NULL;
    
    return head;
}