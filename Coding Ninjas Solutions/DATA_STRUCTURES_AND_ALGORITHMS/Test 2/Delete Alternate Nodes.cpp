void h(Node *head,int c){
    if(head==NULL)
        return ;
        if(c%2==0)
        { if(head->next!=NULL)
            head->next=head->next->next;
        }
     h(head->next,c+2);
}
void deleteAlternateNodes(Node *head) {
    h(head,0);
}