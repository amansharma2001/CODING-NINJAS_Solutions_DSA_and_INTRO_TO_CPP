class Stack {
	Node *head;
    int size;
    
	public:
    Stack() {
        head =NULL;
        size=0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size==0;
    }

    void push(int element) {
        // Implement the push() function
        Node *newNode = new Node(element);
        newNode->next=head;
        head=newNode;
        size++;
    }

    int pop() {
        if (isEmpty())
            return -1;
        int ans = head->data;
        Node  *temp=head;
        head=head->next;
        delete temp;
        size--;
        return ans;
    }

    int top() {
        if (isEmpty())
            return -1;
        int ans = head->data;
        return ans;
    }
};