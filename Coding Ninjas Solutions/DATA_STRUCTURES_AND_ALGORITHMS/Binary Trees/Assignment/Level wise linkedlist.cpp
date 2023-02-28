#include<vector>
using namespace std;
vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    vector<Node<int>*> ans;
    if(root==NULL)
        return ans;
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    
    while(q.size()!=0){
        int s=q.size();
        vector<int> v;
        while(s--){
         BinaryTreeNode<int>* front = q.front();
         if(front==NULL)
             v.push_back(-1);
    	 else
         	v.push_back(front->data);
         q.pop();
         if(front->left){
            q.push(front->left);
         }
         if(front->right){
            q.push(front->right);
         }
        }
        Node<int>* head = new Node<int>(v[0]);
        Node<int>* t = head;
        for(int i=1;i<v.size();i++)
        {
            Node<int> *t1= new Node<int>(v[i]);
            t->next=t1;
            t=t->next;
        }
        t->next=NULL;
        ans.push_back(head);
    }
    return ans;
}