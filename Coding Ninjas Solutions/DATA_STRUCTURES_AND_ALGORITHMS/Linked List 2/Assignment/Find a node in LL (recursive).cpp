int findNodeRec(Node *head, int n)
{
	static int count =0;
    
    if(head==NULL)
        return -1;
    if(head->data!=n){
        count++;
        return findNodeRec(head->next,n);
        
    }
    
    return count;
        
    	
}