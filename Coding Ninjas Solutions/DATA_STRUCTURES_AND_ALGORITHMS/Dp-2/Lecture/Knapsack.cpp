#include <iostream>
using namespace std;


int h(int* weight, int* value, int n, int maxWeight,int ar[]){
     if(n==0 || maxWeight==0)
        return 0;
    if(maxWeight<weight[0])
    {
        return  h(weight+1,value+1,n-1, maxWeight,ar);
    }
    if(ar[n]!=-1)
    {
        return ar[n];
    }
    int x1=  h(weight+1,value+1,n-1, maxWeight-weight[0],ar)+value[0];
    int x2= h(weight+1,value+1,n-1, maxWeight,ar);
    int ans =max(x1,x2);
    
    ar[n]=ans;
    return ar[n];
}
int knapsack(int* weight, int* value, int n, int maxWeight) {
	int ar[n+1];
    for(int i=0;i<n+1;i++)
    {
        ar[i]=-1;
    }
    return h(weight, value,  n, maxWeight,ar);
}


/*
int main()
{
	int n;
	cin >> n;

	int *weights = new int[n];
	int *values = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> weights[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> values[i];
	}

	int maxWeight;
	cin >> maxWeight;

	cout << knapsack(weights, values, n, maxWeight) << endl;

	delete[] weights;
	delete[] values;
}*/