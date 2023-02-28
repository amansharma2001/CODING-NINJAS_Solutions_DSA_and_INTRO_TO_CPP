#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <climits>


int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    if(n==0 || n==1)
    {
        cout<<INT_MIN;
    }
    else
    {
    int c=0;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        p[i]=j;
        
    }
    sort(p.begin(),p.end());
    
    if(p[n-1]==p[n-2])
    {
        cout<<INT_MIN;
    }
    else{
        cout<<p[n-2];
    } 
    }
}