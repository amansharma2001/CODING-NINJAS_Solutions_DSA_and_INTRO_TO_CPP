#include <iostream>
using namespace std;

int binarySearch(int *input, int n, int val)
{
    int s=0;
    int e=n-1;
    int m=(s+e)/2;
    while(s<=e){
        if(val>input[m]){
            s=m+1;
            m=(s+e)/2;
        }
        else if(val<input[m]){
            e=m-1;
            m=(s+e)/2;
        }
        else if(val==input[m]){
            return m;
        }
    }
    return -1;
}

int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	delete [] input;
	return 0;
}