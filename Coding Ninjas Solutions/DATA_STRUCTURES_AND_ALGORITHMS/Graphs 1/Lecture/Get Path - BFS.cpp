#include<vector>
#include<queue>
#include<unordered_map>
#include <iostream>
using namespace std;

void getpath(int **arr,int n, int s,int e, bool *visited){
    
    queue<int>q;
    unordered_map<int, int> map;
    
    q.push(s);
    visited[s]=true;
    
    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        
        for(int i=0;i<n;i++)
        {
            if(arr[f][i]==1 && !visited[i])
            {
                q.push(i);
                visited[i]=true;
                map[i]=f;
            }
            
            
        }
    }
    
    if(!visited[e])
        return;
    
    cout<<e<<" ";
    int i=e;
    while(i!=s)
    {
    	cout<<map[i]<<" ";
        i=map[i];
    }
}
int main() {
   	int n,e;
    queue<int>q;
    cin>>n>>e;
    if(n==0)
        return 0;
    int **arr =new int*[n];
    
    for(int i=0;i<n;i++)
    {
        arr[i]= new int[n];
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }   
    }
    
    for(int i=0;i<e;i++)
    {
        int a,b;
        
        cin>>a>>b;
        
        arr[a][b]=1;
        arr[b][a]=1;
    }
    
    bool *visited= new bool[n];
    for(int i=0;i<n;i++)
        visited[i]=false;
    
    int v1,v2;
    cin>>v1>>v2;
    getpath(arr,n,v1,v2,visited);
    
    return 0;
}