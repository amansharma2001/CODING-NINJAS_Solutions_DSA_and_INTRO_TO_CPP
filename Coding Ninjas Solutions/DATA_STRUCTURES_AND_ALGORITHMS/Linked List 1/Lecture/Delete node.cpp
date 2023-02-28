Node *deleteNode(Node *head, int pos)
{
    if(head==NULL)
        return NULL;
    if(pos==0){
        head = head->next;
        return head;
    }
    Node *temp =head;
    Node *b= temp->next;
    
    for(int count=0;count < pos-1 ;count++){
        if(b->next == NULL){
        return head;
    	}
        
        temp = temp->next;
        b = b->next;
    }
    
    temp->next = b->next;
    
    return head;
}
