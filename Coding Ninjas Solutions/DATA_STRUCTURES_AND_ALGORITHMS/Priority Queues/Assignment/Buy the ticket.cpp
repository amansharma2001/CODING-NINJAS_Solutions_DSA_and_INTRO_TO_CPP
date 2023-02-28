#include <iostream>
#include <vector>
using namespace std;



#include<queue>
int buyTicket(int *arr, int n, int k) {
    // Write your code here
    int time=1;
    
    queue<int> q;
	priority_queue<int> pq;
    
    for(int i=0;i<n;i++)
        q.push(i);
    for(int i=0;i<n;i++)
        pq.push(arr[i]);
    
    while(q.front()!=k || pq.top()!= arr[q.front()])
    {
        if(arr[q.front()]!=pq.top())
        {
            int i = q.front();
            q.pop();
            q.push(i);
        }
        else
        {
           	pq.pop();
           	q.pop();
        	time++;
        }
    }
    
    return time;
    
}


/*
int main() {
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << buyTicket(arr, n, k);

    delete[] arr;
}

*/


