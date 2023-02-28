#include <bits/stdc++.h>
using namespace std;

#include<climits>
int countStepsToOne(int n)
{
	int *arr = new int[n+1];
    
    arr[0]=0;
	arr[1]=0;

    
    for(int i=2;i<=n;i++)
    {	
        int min1,min2, min3;
        min1=min2=min3=INT_MAX;
        
        if(i%2==0)
        {
            min1= arr[i/2];
        }
        if(i%3==0)
        {
            min2= arr[i/3];
        }
    
        min3=arr[i-1];
    	
        arr[i] = 1+ min(min1,min(min2,min3));
    }
    return arr[n];
}


/*
int main()
{
	int n;
	cin >> n;
	cout << countStepsToOne(n);
}*/