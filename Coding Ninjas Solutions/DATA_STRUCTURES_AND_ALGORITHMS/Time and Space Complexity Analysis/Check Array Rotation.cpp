#include <iostream>
using namespace std;

#include<limits.h>
int arrayRotateCheck(int *input, int size)
{	
    int c=INT_MIN;
    int count=0;
    
    for(int i =0;i<size;i++){
        if(c<input[i]){
            c=input[i];
            count++;
        }
        else
            break;
            
    }
    if(count==size){
        return 0;
    }
    else{
        return count;
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}