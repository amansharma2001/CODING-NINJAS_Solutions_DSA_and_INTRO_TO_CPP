#include<vector>
#include <iostream>
using namespace std;


bool getpath(int **arr,int n, int s, int e, bool *visited, vector<int> &ans)
{
   
 	if(s==e)
    {
        ans.push_back(s);
        return true;
    }
    
    visited[s]=true;
        
    bool res =false;
    
    for(int i=0;i<n;i++)
    {
        if(!visited[i] && arr[s][i]==1)
            res = getpath(arr,n,i,e,visited,ans);
            
    	if(res==true)
        {
            ans.push_back(s);
            return true;
        }
    }
    return res;   
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
    
    vector<int> ans;
    
    if(getpath(arr,n,v1,v2,visited,ans)){
            for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
    }
    
    return 0;
}