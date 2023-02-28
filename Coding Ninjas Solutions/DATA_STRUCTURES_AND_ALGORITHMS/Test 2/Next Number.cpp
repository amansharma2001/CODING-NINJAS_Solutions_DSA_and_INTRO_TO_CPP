int h(Node *head,int c){
    if(head->next==NULL)
    {
        if(head->data==9)
        {
            head->data=0;
            c=1;
            return c;
        }
        head->data=head->data+1;
        return 0;
    }
    int k=h(head->next,c);
    if(k==0)
        return 0;
     if(head->data==9)
        {
            head->data=0;
            c=1;
            return c;
        }
        head->data=head->data+1;
        return 0;
    
}
Node* NextLargeNumber(Node *head) {
    int f=0;
    if(head->data==0) f=1;
    int k=h(head,0);
    if(head->data==0 && f==0)
    {
        Node *n=new Node(1);
        n->next=head;
        head=n;
    }
    return head;
}