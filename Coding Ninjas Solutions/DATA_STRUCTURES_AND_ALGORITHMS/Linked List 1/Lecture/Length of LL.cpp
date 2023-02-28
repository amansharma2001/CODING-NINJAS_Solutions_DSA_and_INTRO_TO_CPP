int length(Node *head)
{
    int count = 0;
    
    //Node * =head;
    while(head != NULL){
        count++;
        head = head -> next;
   }
    
    return count;
}
