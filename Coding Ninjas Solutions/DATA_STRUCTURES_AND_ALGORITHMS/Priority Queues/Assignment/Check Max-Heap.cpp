#include <iostream>
using namespace std;

bool isMaxHeap(int arr[], int n) {
    // Write your code here
    
    for(int child=1; child<n ;child++)
    {
        int parent = (child-1)/2;
        if(arr[parent]<arr[child])
            return false;
    }
}


/*
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << (isMaxHeap(arr, n) ? "true\n" : "false\n");

    delete[] arr;
}
*/