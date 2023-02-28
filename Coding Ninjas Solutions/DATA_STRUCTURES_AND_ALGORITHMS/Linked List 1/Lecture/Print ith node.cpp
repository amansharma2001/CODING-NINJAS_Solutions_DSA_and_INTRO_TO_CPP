void printIthNode(Node *head, int i)
{	
    int count = 0;
    
   	if(head == NULL)
        return;
	while( count!=i ){
        if(head == NULL)
        	return;
        head =  head->next;
        count++;
    }
    cout<<head->data;
}