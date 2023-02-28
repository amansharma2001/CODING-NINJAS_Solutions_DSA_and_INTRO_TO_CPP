#include<vector>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void connect(int **arr,int n,int s, bool* visited,vector<int> &ans )
{	
    ans.push_back(s);
    visited[s]=true;
    
    for(int i=0;i<n;i++)
    {
        if(arr[s][i]==1 && !visited[i])
        {
            connect(arr,n,i,visited,ans);
            visited[i]=true;
            
        }
            
    }
}
int main() {
    int n,e;
    
    cin>>n>>e;
    
    int **arr = new int *[n];
    for(int i=0;i<n;i++)
    {
        arr[i]= new int[n];
        for(int j=0;j<n;j++)
            arr[i][j]=0;
    }
    
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        
        arr[a][b]=1;
        arr[b][a]=1;
    }
    
    bool* visited= new bool[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }
    
    for(int i=0;i<n;i++)
    {	
        if(!visited[i])
        {
            
            vector<int> ans;
            connect(arr,n,i,visited,ans);
            sort(ans.begin(),ans.end());
            for(int i =0;i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        
    }
    
    
}