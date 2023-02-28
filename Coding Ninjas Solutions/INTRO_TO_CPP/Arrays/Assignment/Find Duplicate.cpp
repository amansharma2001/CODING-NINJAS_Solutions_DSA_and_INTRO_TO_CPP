#include <iostream>
using namespace std;

int duplicateNumber(int *arr, int size)
{
    int ans;
    int i = 0;
    while(i<size-1){
        int j =i+1;
        while (j<size){
            if (arr[i]==arr[j]){
                ans=arr[i];
                break;
            }
            j++;
                
        }
        i++;
    }
    return ans;
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

		cout << duplicateNumber(input, size) << endl;
	}

	return 0;
}