#include <iostream>
using namespace std;


#define mod 1000000007;
long balancedBTs(int n) {
    // Write your code here
    
    long *arr = new long[n+1];
    
    arr[0]=1;
    arr[1]=1;
	
    for(int i=2;i<=n;i++)
    {
        arr[i] = (arr[i-1]*((2*arr[i-2])+arr[i-1]))%mod;
    }
    
    return arr[n];
}


/*
int main() {
    int n;
    cin >> n;
    cout << balancedBTs(n);
}*/