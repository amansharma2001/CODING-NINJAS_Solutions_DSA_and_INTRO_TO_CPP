#include<bits/stdc++.h>
using namespace std;

int arr[11][11];


bool check(int n, int row, int col)
{
    for(int i=row-1;i>=0;i--)
    {
        if(arr[i][col]==1)
            return false;
    }
    
    
    for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--)
    {
        if(arr[i][j]==1)
            return false;
    }
    
    for(int i=row-1, j=col+1; i>=0 && j<n; i--, j++)
    {
        if(arr[i][j]==1)
            return false;
    }
    
    return true;
}
void nqueenHelper(int n, int row)
{
    if(row==n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
        return;
    }
    
    for(int j=0;j<n;j++)
    {
        if(check(n,row,j))
        {
            arr[row][j]=1;
        	nqueenHelper(n,row+1);
            arr[row][j]=0;
        }
        
    }
    return;

}

void nqueen(int n)
{
	memset(arr,0,11*11*sizeof(int));
    nqueenHelper(n,0);
}
int main(){
    
    int n;
    cin>>n;
    
    nqueen(n);
    return 0;
}