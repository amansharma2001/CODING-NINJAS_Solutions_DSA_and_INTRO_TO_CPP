#include <bits/stdc++.h>
using namespace std;


#include<cmath>
#include<bits/stdc++.h>
int cost(int **input, int i, int j,int m,int n)
{
    int count = input[i][j];
    
    if(i==m-1 && j==n-1)
    {
        return count;
    }
    int a,b,c;
    
    if(j==n-1 && i!=m-1)
    {
        return count + cost(input,i+1,j,m,n);
    }
	
    if(j!=n-1 && i==m-1)
    {
        return count + cost(input,i,j+1,m,n);
    }
    
    if(j!=n-1 && i!=m-1)
    {
     	a = cost(input,i+1,j,m,n);
    	b = cost(input,i,j+1,m,n);
    	c =	cost(input,i+1,j+1,m,n);  
        return count + min(a,min(b,c));
    }
    
}
int minCostPath(int **input, int m, int n)
{	

    return cost(input, 0, 0, m, n);
}


/*
int main()
{
	int **arr, n, m;
	cin >> n >> m;
	arr = new int *[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << minCostPath(arr, n, m) << endl;
}*/