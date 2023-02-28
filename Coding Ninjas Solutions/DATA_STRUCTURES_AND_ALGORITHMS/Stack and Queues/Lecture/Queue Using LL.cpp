class Queue {
	Node *head;
    Node *tail;
    int size;
   public:
    Queue() {
		head=NULL;
        tail=NULL;
        size=0;
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		return size;
	}

    bool isEmpty() {
		return size==0;
	}

    void enqueue(int data) {
        
        Node *newnode =new Node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
            
        }
        size++;
        
	}

    int dequeue() {
        if(isEmpty())
            return -1;
        Node *temp=head;
        int ans= temp->data;
        head=head->next;
        delete temp;
        size--;
        return ans;
    }

    int front() {
        if(isEmpty())
            return -1;
        int ans = head->data;
        return ans;
    }
};