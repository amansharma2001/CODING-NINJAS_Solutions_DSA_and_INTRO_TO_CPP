Node *appendLastNToFirst(Node *head, int n)
{	
    if(head==NULL)
        return 0;
    Node *temp=head;
    Node *tail=head;
    for(int i=0;i<n;i++){
        tail=tail->next;
    }
    while(tail->next!=NULL){
        temp=temp->next;
        tail=tail->next;
    }
    
    tail->next=head;
    head=temp->next;
    temp->next=NULL;
    
    return head;
}