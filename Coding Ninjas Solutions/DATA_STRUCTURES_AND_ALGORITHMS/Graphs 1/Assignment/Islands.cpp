#include <iostream>
#include <vector>
using namespace std;
void island(int **arr,int n,int s,bool *visited)
{
    
    visited[s]=true;
    for(int i=0;i<n;i++)
    {
        if(arr[s][i]==1 && !visited[i])
        	island(arr,n,i,visited);
    }
    return;
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
    
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            island(arr,n,i,visited);
              count++;
        }
    }
    
    
    cout<<count;
}