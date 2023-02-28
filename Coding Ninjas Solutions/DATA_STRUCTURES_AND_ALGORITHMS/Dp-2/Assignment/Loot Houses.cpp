#include <iostream>
using namespace std;


int money(int *arr, int n, int *count)
{
    if(n<=0)
    	return 0;
    
    if(count[n]!= -1)
        return count[n];
    int x = money(arr+2,n-2,count)+arr[0];
    int y = money(arr+1,n-1,count);
        
    
    count[n]= max(x,y);
    
    return count[n];
}
int maxMoneyLooted(int *arr, int n)
{	
	int *count =  new int[n+1];
    for(int i=0;i<=n;i++)
    {
        count[i] = -1;
            
    }
    money(arr,n,count);
}



/*
int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << maxMoneyLooted(arr, n);

	delete[] arr;
}*/