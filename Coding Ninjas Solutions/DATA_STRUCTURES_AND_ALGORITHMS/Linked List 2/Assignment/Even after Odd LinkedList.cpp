Node *evenAfterOdd(Node *head)
{	
    if(head==NULL)
        return head;
    Node *temp=head;
    
    Node *oddh=NULL,*oddt=NULL,*evenh=NULL,*event=NULL;
    
    while(temp!=NULL){
        if(temp->data%2!=0){
        	if(oddh==NULL){
            oddh=temp;
            oddt=temp;
        	}
            else{
                oddt->next=temp;
                oddt=temp;
            }
        }
        if(temp->data%2==0){
        	if(evenh==NULL ){
            evenh=temp;
            event=temp;
        	}
            else{
                event->next=temp;
                event=temp;
            }
        }
        temp=temp->next;
    }
    if (oddt != NULL)
        oddt->next = evenh;
    if (event != NULL)
        event->next = NULL;
    if (oddh == NULL)
        return evenh;
    else
        return oddh;
        
    
}