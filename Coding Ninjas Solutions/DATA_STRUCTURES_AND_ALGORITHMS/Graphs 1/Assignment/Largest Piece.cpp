#include <iostream>
#include <vector>
using namespace std;


#include<bits/stdc++.h>
void solve(vector<vector<int>> &cake,int n,int &k, int i,int j)
{
    k++;
    cake[i][j]=0;
    
    if(i+1<n && cake[i+1][j]==1 )
        solve(cake,n,k,i+1,j);
    if(i-1>=0 && cake[i-1][j]==1 )
        solve(cake,n,k,i-1,j);
    if(j+1<n && cake[i][j+1]==1 )
        solve(cake,n,k,i,j+1);
    if(j-1>=0 && cake[i][j-1]==1 )
        solve(cake,n,k,i,j-1);
    
}
int getBiggestPieceSize(vector<vector<int>> &cake, int n) {
    
    
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int k=0;
            if(cake[i][j]==1)
            {
                
                solve(cake,n,k,i,j);
                count = max(k,count);
            }
                
        }
    }
    return count;
}


/*
int main() {
    int n;
    cin >> n;

    vector<vector<int>> cake(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> cake[i][j];
        }
    }

    cout << getBiggestPieceSize(cake, n);
}*/