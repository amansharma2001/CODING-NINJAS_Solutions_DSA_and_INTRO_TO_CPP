#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
	if(n<=1){
        return -2147483648;
    }
    
    int largest = -2147483648;
    int second_largest = -2147483648;
    int i =0;
    while(i<n){
        if(input[i]>second_largest && input[i]<largest){
            second_largest = input[i];
        }
        if(input[i]>largest){
            second_largest = largest;
            largest= input[i];
        }

        i++;
        
    }
    return second_largest;
    
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

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}