Node *removeDuplicates(Node *head)
    
{	
    Node* node = head;
    while(node != NULL){
       if((node->next != NULL) && (node->next->data == node->data))
       {
           Node* oldNext = node->next;
           node->next = oldNext->next;
           delete oldNext;
       }
       else
           node = node->next;
   } 
   return head;

}