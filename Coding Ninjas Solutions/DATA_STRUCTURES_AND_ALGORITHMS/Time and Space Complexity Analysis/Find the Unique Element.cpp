cpp#include<limits.h>
#include <iostream>
using namespace std;


int findUnique(int *arr, int n) {
  
    int max=INT_MIN;
    for(int i =0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    
    int uni[max+1]={0};
    
    for(int i=0;i<n;i++){
        uni[arr[i]]++;
    }
    
    int uni1=0;
    for(int i =0;i<=max;i++){
        if(uni[i]==1){
            uni1=i;
        }
    }
    return uni1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}