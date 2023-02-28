Node *bubbleSort(Node *head)
{
    
    if(head==NULL || head->next==NULL)
        return head;
    
    int size =0;
    
	Node *temp1=head;
	while(temp1!=NULL){
        size++;
        temp1=temp1->next;
    }
    for(int i=0;i<=size;i++){
        Node *temp=head;
    	while(temp->next!=NULL)
    	{
        if(temp->data>temp->next->data)
        {
            swap(temp->data, temp->next->data);
            
        }
        temp=temp->next;
    	}
    }
    
        
    return head;
}