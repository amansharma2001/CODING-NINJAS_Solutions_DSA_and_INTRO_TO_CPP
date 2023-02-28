#include <iostream>
#include <algorithm>
using namespace std;

void sortZeroesAndOne(int *input, int size) 
{ 
    int nextZero = 0; 
    for (int i = 0; i < size; i++) 
    {
        if (input[i] == 0) 
        { 
            swap(input[i],input[nextZero]);
            nextZero++;
        } 
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
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}