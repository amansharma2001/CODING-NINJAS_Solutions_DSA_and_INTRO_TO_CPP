#include <iostream>
#include <vector>
using namespace std;


#include<unordered_map>
#include<vector>
#include<bits/stdc++.h>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    
   
    unordered_map<int, int> m;
    vector<int> ans;
    for (int i = 0; i < n; i++)
        m[arr[i]] = i;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        
        if (m.count(arr[i] - 1) == 0)
        {
            temp.push_back(arr[i]);
            int t = 1;
            while (m.count(arr[i] + t))
            {
                temp.push_back(arr[i] + t);
                t++;
            }
            if (temp.size() > ans.size())
                ans = temp;
        }
    }
    int n1 = ans[0];
    int n2 = ans[ans.size() - 1];
    ans.clear();
    ans.push_back(n1);
    ans.push_back(n2);
    return ans;
   
	
}


/*
int main() {
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    vector<int> ans = longestConsecutiveIncreasingSequence(arr, size);

    for (auto i = ans.begin(); i != ans.end(); ++i)
        cout << *i << " ";

    delete[] arr;
}
*/