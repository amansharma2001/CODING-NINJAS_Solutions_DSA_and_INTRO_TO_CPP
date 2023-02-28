#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    int val=1;
    int start = 0 ,end = n-1;
    while(start<=end){
        if(val%2==1){
    arr[start]=val;
    val++;
    start++;
  }  
        else{
            arr[end]=val;
    val++;
    end--;
        }
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}