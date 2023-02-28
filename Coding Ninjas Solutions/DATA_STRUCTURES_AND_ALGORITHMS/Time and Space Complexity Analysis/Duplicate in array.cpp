#include<limits.h>
#include <iostream>
using namespace std;


int findDuplicate(int *arr, int n)
{	
    int max=INT_MIN;
    for(int i =0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    
    int dup[max+1]={0};
    
    for(int i=0;i<n;i++){
        dup[arr[i]]++;
    }
    
    int dup1=0;
    for(int i =0;i<=max;i++){
        if(dup[i]==2){
            dup1=i;
        }
    }
    return dup1;
    
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}