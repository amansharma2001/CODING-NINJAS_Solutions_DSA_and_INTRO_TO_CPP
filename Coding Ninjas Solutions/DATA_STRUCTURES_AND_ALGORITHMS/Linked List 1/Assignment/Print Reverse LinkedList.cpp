void printReverse(Node *head)
{
    Node *p= head;
    Node *q= NULL;
    Node *r= NULL;
    
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    
    	
}