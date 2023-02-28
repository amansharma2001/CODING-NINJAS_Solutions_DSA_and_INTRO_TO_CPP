#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
    int newarr[n];
    
	int j=0;
    
    for(int i =d;i<n;i++){
        newarr[j++]= input[i];
    }
    
    for(int k=0;k<d;k++){
        newarr[j++]=input[k];
    }
    
    for(int l=0;l<n;l++){
        input[l]=newarr[l];
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

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}