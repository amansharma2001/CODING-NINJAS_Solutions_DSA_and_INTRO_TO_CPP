#include<stack>
void zigZagOrder(BinaryTreeNode<int> *root) {
    
    if(root==NULL)
        return;
    stack<BinaryTreeNode<int> *> o;
    stack<BinaryTreeNode<int> *> e;
    
    o.push(root);
    
    while(!o.empty() || !e.empty())
    {
        while(!o.empty())
        {
            BinaryTreeNode<int>* o_f=o.top();
            cout<<o_f->data<<" ";
            o.pop();
            
            if(o_f->left)
                e.push(o_f->left);
            if(o_f->right)
                e.push(o_f->right);
            
            if(o.empty())
                cout<<endl;
        }
        
        while(!e.empty())
        {
            BinaryTreeNode<int>* e_f=e.top();
            cout<<e_f->data<<" ";
            e.pop();
            
            if(e_f->right)
                o.push(e_f->right);
            
            if(e_f->left)
                o.push(e_f->left);
            if(e.empty())
                cout<<endl;
        }
    }
}