#include <iostream>
using namespace std;
void isconnected(int **arr,int n,int s,bool* &visited )
{
    
    if(n==0)
        return;
	visited[s]=true;
    
	for(int i=0;i<n;i++)
    {
        if(arr[s][i]==1 && !visited[i])
        	isconnected(arr,n,i,visited);
        
    }
    
    return ;
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
    
    int v1,v2;
    cin>>v1>>v2;
    
    
    bool* visited= new bool[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }
    
    
    isconnected(arr, n,0,visited);
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(visited[i]==false)
        {
            k=1;
            break;
        }
    }
    
        if(k==1)
        	cout<<"false";
   		else
    		cout<<"true";
    
    
    
	
}