int findNode(Node *head, int n){
    int count =0;
    Node *temp=head;
    
    while(temp!=NULL){
        if(temp->data==n)
            return count;
    	temp=temp->next;
        count++;
    }
    return -1;
}