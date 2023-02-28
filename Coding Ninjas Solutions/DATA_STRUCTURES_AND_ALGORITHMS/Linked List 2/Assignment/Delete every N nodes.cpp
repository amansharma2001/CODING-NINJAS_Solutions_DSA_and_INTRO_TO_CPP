
int length(Node *head)
{
    // Write your code here
    int len = 0;
    Node *current = head;
    while (current != NULL)
    {
        len++;
        current = current->next;
    }
    return len;
}

Node *skipMdeleteN(Node *head, int M, int N)
{
    // Write your code here
    if (head == NULL)
        return head;
    int len = length(head);
    int m = M, n = N;
    Node *current = head;
    Node *prev = NULL;
    while (current != NULL)
    {
        if (m != 0)
        {
            prev = current;
            current = current->next;
            m--;
        }
        if (m == 0 && n != 0)
        {
            if (M != 0)
            {
                prev->next = current->next;
                delete current;
                current = prev->next;
            }
            else
            {
                prev = current->next;
                delete current;
                current = prev;
                head = current;
            }
            n--;
        }
        if (m == 0 && n == 0)
        {
            m = M;
            n = N;
        }
    }
    return head;
}