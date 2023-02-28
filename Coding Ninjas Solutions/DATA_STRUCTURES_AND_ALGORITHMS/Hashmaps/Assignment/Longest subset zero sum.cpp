#include <iostream>
using namespace std;


#include<unordered_map>
int lengthOfLongestSubsetWithZeroSum(int* arr, int n) {
    
    unordered_map<int,int>map;
    int s=0;
    int m=0;
    for(int i =0;i<n;i++)
    {	
        s+=arr[i];
        if(s==0)
        {
            m=i+1;
        }
        else
        {
            if(map.find(s)!=map.end())
                m= max(m,i-map[s]);
            else
                map[s]=i;
        }
    }
    return m;
}

/*
int main() {
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << lengthOfLongestSubsetWithZeroSum(arr, size);

    delete[] arr;
}*/