Node *deleteNodeRec(Node *head, int pos) {
	if(head==NULL)
        return head;
    
    else{
        if(pos==0){
        head=head->next;
            return head;
        }
    	head->next = deleteNodeRec(head->next,pos-1);
    	
    }
    return head;

}