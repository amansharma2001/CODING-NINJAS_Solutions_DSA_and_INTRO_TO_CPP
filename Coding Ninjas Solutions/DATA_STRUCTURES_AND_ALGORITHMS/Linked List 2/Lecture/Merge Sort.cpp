Node *ms(Node *h1,Node *h2){
    if(h1==NULL)
        return h2;
    else if (h2==NULL)
        return h1;
    
    
    
    Node *fh=NULL,*ft=NULL;
    if(h1->data < h2->data){
            fh=h1;
            ft=h1;
            h1 = h1->next;
        }
    else {
            fh=h2;
            ft=h2;
            h2 = h2->next;
        }
    while(h1!=NULL && h2!=NULL){
        if(h1->data <= h2->data){
            ft->next=h1;
            ft=ft->next;
            h1 = h1->next;
        }
        else{
            ft->next=h2;
            ft=ft->next;
            h2 = h2->next;
        }
        
    }
    if (h1 != NULL) {
    	ft->next = h1;
  		} 
    else  {
    	ft->next = h2;
 	 }
    return fh;
}
 
Node *mergeSort(Node *head)
{	
    if(head==NULL || head->next==NULL)
        return head;
	Node *slow =head;
    Node *fast =head;
    Node *slow_1=NULL;
    while(fast!=NULL && fast->next!=NULL){
        slow_1=slow;
        slow=slow->next;
        
        fast=fast->next->next;
    }

    slow_1->next=NULL;
    
    Node *h1=mergeSort(head);
    Node *h2=mergeSort(slow);
    Node *h3=ms(h1,h2);
    
    return h3;
}