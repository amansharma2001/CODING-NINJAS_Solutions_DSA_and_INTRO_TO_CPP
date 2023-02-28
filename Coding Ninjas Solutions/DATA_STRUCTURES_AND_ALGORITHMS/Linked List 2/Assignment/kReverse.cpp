void reverse(Node *s,Node *e){
    Node *p=NULL,*c=s,*n=s->next;
    while(p!=e){
        c->next=p;
        p=c;
        c=n;
        if(n!=NULL)n=n->next;
    }
}
Node *kReverse(Node *head, int k)
{
	if(head==NULL||head->next==NULL||k==1||k==0)
        return head;
    Node *s=head,*e=head;
    int inc=k-1;
    while(inc--){
        if(e->next==NULL){
            break;
        	}
        e=e->next;     
    }
    Node *nexthead = kReverse(e->next,k);
    reverse(s,e);
    s->next=nexthead;
    return e;
}