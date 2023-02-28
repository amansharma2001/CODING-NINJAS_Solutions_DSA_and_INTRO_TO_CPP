#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
    int i;
    for(i=0;i<n-i;i++){
        swap(input[i],input[n-i-1]);
    }
    
    for(int j=0;j<n-d-j;j++){
        swap(input[j],input[n-d-j-1]);
    }
    
    int l=0;
    int k=n-d;
    while(k<n-l){
        swap(input[k],input[n-l-1]);
        l++;
        k++;
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