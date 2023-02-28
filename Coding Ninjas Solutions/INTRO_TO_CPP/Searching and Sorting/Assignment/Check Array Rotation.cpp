#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
    if(size==0){
        return 0;
    }
    int count=0;
    for(int i=0;i<size;i++){
        if(input[size-i-1]<input[size-i-2]){
            count+= size-i-1;
            break;
        }
    }
    return count;
    
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

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}