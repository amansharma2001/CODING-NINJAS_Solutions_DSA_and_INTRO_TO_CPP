#include <iostream>
using namespace std;


void solve(int **arr,int n,int i,int j,int &count)
{
    for(int k=0;k<n;k++)
    {
        if(k==i && k==j)
            continue;
        if(arr[i][k]==1 && arr[j][k]==1)
            count++;
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
  
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==1 && i!=j)
                solve(arr,n,i,j,count);
        }
    }
    cout<<count/6;
}