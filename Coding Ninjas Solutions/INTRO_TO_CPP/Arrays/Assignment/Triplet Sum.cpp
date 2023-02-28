#include <iostream>
using namespace std;

int tripletSum(int *input, int size, int x)
{
	int pair=0;
	int i=0;
    while(i<size-2){
        int j = i+1;
        while(j<size-1){
            int k = j+1;
            while(k<size)
            {
                if ((input[i]+input[j] + input[k])==x){
                pair++;
            }
                k++;
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

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}