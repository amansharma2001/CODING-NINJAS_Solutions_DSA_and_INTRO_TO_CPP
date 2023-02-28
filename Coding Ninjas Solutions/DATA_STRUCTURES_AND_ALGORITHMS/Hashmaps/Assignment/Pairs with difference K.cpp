#include <iostream>
using namespace std;

#include<unordered_map>

int getPairsWithDifferenceK(int *arr, int n, int k) {
	unordered_map<int,int> map;
    
    int pair=0;
    
    for(int i=0;i<n;i++)
    {
        map[arr[i]]++;
    }
    
    for(int i=0;i<n;i++)
    {	
        if(k!=0){
            int a = arr[i]-k;
            if(map.count(a)>0)
            {
                pair += map[a];
            }

        }
        else
        {
            if(map.count(arr[i])>0)
            {
                pair += map[arr[i]];
                map[arr[i]]--;
            }
            pair--;
        }
        
    }
    
    return pair;
}


/*int main() {
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    cout << getPairsWithDifferenceK(input, n, k);

    delete[] input;
}*/