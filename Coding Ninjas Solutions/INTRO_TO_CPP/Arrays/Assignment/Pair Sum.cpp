#include <iostream>
using namespace std;

int pairSum(int *input, int size, int x)
{
    int pair=0;
	int i=0;
    while(i<size-1){
        int j = i+1;
        while(j<size){
            if ((input[i]+input[j])==x){
                pair++;
            }
            j++;
        }
        i++;
    }
    return pair;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}