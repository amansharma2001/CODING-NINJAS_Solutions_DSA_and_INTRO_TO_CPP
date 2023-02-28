#include <iostream>
#include <vector>
using namespace std;


#include<queue>
#include<climits>

int kthLargest(int* input, int n, int k) {
    // Write your code here
    priority_queue<int> pq;
    vector<int> ans;
    for(int i=0;i<n;i++)
        pq.push(input[i]);
    
    
    for(int i=0;i<k-1;i++)
        pq.pop();
    
    return pq.top();

}


/*
int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << kthLargest(arr, n, k);

    delete[] arr;
}

*/