#include<bits/stdc++.h>
using namespace std;

bool isSafe(int **arr,int x, int y, int n)
{
    if(x>=0 && x<n && y>=0 && y<n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

void ratInAmaze(int **arr,int row, int col, int n, int **sol)
{
    if(row == n-1 && col == n-1 )
    {	
        sol[row][col]=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout << sol[i][j] << " ";
            }
           
        }
    	cout<<endl;
        sol[row][col]=0;
        return;
    }
    if(row>=n || row<0 || col>=n || col<0 || sol[row][col]==1)
      	return;
   	if(isSafe(arr,row,col,n))
            {
                
                sol[row][col] = 1;
                
                ratInAmaze(arr,row+1,col,n,sol);
                ratInAmaze(arr,row-1,col,n,sol);
    			ratInAmaze(arr,row,col+1,n,sol);
                ratInAmaze(arr,row,col-1,n,sol);
                sol[row][col]=0;
            }
        
}
int main() {

	int n;
    cin>>n;
    
    int **arr = new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = new int[n];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int **sol = new int*[n];
    
    for(int i=0;i<n;i++)
    {
        sol[i]= new int[n];
        for(int j=0;j<n;j++)
        {
        	sol[i][j]=0;
        }
    }
    
    ratInAmaze(arr,0,0,n,sol);
    
	return 0;
}
