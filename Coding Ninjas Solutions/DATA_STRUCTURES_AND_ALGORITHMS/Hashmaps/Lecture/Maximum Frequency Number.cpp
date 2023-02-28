#include <iostream>
using namespace std;


#include<vector>
#include<unordered_map>
int highestFrequency(int arr[], int n) {
    unordered_map<int,int> v;
    
    for(int i=0;i<n;i++)
    {
        v[arr[i]]++;
    }
    
    int freq = 0;
    int ans = 0;
    for(int i=0;i<v.size();i++)
    {
        if(v[arr[i]]>freq){
            freq = v[arr[i]];
            ans = arr[i];
        }
            
    }
    
    return ans;
}




/*
int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}*/