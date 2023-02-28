#include <queue>
#include <iostream>
using namespace std;


void print(int **arr,int n, int s,bool *visited){
    queue<int> q;
    
    q.push(s);
    visited[s]=true;
    while(!q.empty())
    {
        int front1 = q.front();
        q.pop();
        
        cout<<front1<<" ";
        
        for(int i=0;i<n;i++)
        {
            if(i==front1 || visited[i])
                continue;
            if(arr[front1][i]==1)
            {
                q.push(i);
                visited[i]=true; 
            }
        }
    }
}
int main() {
   	int n,e;
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
    
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
            print(arr,n,i,visited);
    }
    
}