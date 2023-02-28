#include <cstring>
#include <iostream>
using namespace std;

int knap(int *weights, int *values, int n, int maxWeight,int **output)
{
    int ans;
    if(n==0 || maxWeight==0)
        return 0;
	
    if(output[n][maxWeight]!= -1)
        return output[n][maxWeight];
    
    if(weights[0]>maxWeight)
        ans= knap(weights+1,values+1,n-1,maxWeight,output);
    else
    {
        int x = knap(weights+1,values+1,n-1,maxWeight-weights[0],output)+values[0];
    	int y =	knap(weights+1,values+1,n-1,maxWeight,output);
        ans=max(x,y);
    }
    
    
    output[n][maxWeight]=ans;
    return output[n][maxWeight];
    
}



int knapsack(int *weights, int *values, int n, int maxWeight)
{
    
    int **output = new int*[n+1];
    for(int i=0;i<=n;i++)
    {
        output[i] = new int[maxWeight+1];
        for(int j=0;j<=maxWeight;j++)
        	output[i][j]= -1;
    }
	return knap(weights,values,n,maxWeight,output);
    
}


/*

int main() {
    int n;
    cin >> n;
    int* wt = new int[n];
    int* val = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    for (int j = 0; j < n; j++) {
        cin >> val[j];
    }

    int w;
    cin >> w;

    cout << knapsack(wt, val, n, w) << "\n";

    delete[] wt;
    delete[] val;
}*/