#include <iostream>

using namespace std;

void subsetSumToK_helper(int *arr,int n, int index, int output[][50], int &output_size, int target, int *ans, int count) {
    // base case
    if(index == n) {
        if(target == 0 and count != 0) {
            output[output_size][0] = count;
            for(int i = 0; i < count; i++){
                output[output_size][i + 1] = ans[i];
            }
            output_size++;
        }
        return;
    }
    
   
    subsetSumToK_helper(arr, n, index + 1, output, output_size, target, ans, count);
    
    
    ans[count] = arr[index];
    subsetSumToK_helper(arr, n, index + 1, output, output_size, target - arr[index], ans, count + 1);
    
}

int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
    int ans[n];
    int output_size = 0;
    int count = 0;
    int index = 0;
    
    subsetSumToK_helper(input, n, 0, output, output_size, k, ans, count);
    return output_size;
    
}

int main() {
  int input[20],length, output[10000][50], k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;
  
  int size = subsetSumToK(input, length, output, k);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
