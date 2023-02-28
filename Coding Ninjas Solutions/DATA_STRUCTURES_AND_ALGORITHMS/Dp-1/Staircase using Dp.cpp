#include<bits/stdc++.h>
using namespace std;
long mod = 1000000007;

long staircase1(int n){
    long* arr =new long[n+1];
    arr[0]=1%mod;
    arr[1]=1%mod;
    arr[2]=2%mod;
    for(int i=3;i<=n;i++)
    {
        
        arr[i]=(arr[i-1]+arr[i-2]+arr[i-3])%mod;
    }
    
    return arr[n];
}

int main(){
    int t;
    cin>>t;
    int n;
    
    while(t--)
    {
        cin>>n;
        cout<< staircase1(n)<<endl;
    }
    
    
    
    return 0;
}