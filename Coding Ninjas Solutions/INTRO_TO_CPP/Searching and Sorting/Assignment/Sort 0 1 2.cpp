#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n)
{
    int one=0;
    int zero=0;
    int two=0;
	for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]==1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    for(int j=0;j<zero;j++)
    {
        arr[j]=0;
    }
    for(int k=zero;k<one+zero;k++)
    {
        arr[k]=1;
    }
    for(int l=one+zero;l<two+one+zero;l++)
    {
        arr[l]=2;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;

		cin >> size;
		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}