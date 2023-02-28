#include <iostream>

using namespace std;

bool spliter(int arr[], int n, int start, int ls, int rs)
{

    if (start == n)
        return ls == rs;
    if (arr[start] % 5 == 0)
        ls += arr[start];
    else if (arr[start] % 3 == 0)
        rs += arr[start];
    else
        return spliter(arr, n, start + 1, ls + arr[start], rs) + spliter(arr, n, start + 1, ls, rs + arr[start]);
    return spliter(arr, n, start + 1, ls, rs);
}
bool splitArray(int *input, int size)
{
    return spliter(input, size, 0, 0, 0);
}


int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
    if(splitArray(input, size)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

	
	return 0;

}
