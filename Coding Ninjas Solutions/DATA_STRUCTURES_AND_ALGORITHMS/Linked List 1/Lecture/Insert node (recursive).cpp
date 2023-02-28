Node* insertNode(Node *head, int i, int data) {
	if(head==NULL)
        return head;
    
    else{
        if(i==0){
        Node *newNode = new Node(data);
        newNode->data=data;
        newNode->next=head;
        head=newNode;
        
            return head;
        }
    	head->next = insertNode(head->next,i-1,data);
    	
    }
    return head;
}