
bool isPalindrome(Node *head)
{
    if(head==NULL || head->next==NULL)
        return true;
    Node *slow=head;
    Node *fast=head;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    Node *next=NULL;
    Node *cur=slow;
    Node *prev=NULL;
    while(cur)
    {
       next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
     while(prev && head){
            
            if(prev->data != head->data)return false;
            
            prev = prev->next;
            head = head->next;
        }
        return true;
}