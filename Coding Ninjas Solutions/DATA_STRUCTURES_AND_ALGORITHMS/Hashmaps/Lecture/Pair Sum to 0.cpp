#include <iostream>
using namespace std;


#include<unordered_map>
int pairSum(int *arr, int n) {
    
    unordered_map<int,int> map;
	int pair_count=0;
    
    for(int i=0;i<n;i++)
    {	
        map[arr[i]]++;
    }
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0 and map[arr[i]] > 1) {
            pair_count += ((map[arr[i]]) *(map[arr[i]] - 1)) / 2;
            map[arr[i]] = 0;
        } else if(map[-arr[i]] and arr[i] != 0) {
            pair_count += map[arr[i]] * map[-arr[i]];
            map[arr[i]] = 0;
            map[-arr[i]] = 0;
        }
    }
    return pair_count;
}


/*
int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}
*/