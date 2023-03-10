#include <iostream>
using namespace std;

void printSubsetSumToK_helper(int *arr, int n, int index, int target, int *ans, int count) {
    //base case
    if(index == n) {
        if(target == 0 and count != 0) {
            for(int i = 0; i < count; i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    
 
    printSubsetSumToK_helper(arr, n , index + 1, target, ans, count);
    

	ans[count] = arr[index];
    printSubsetSumToK_helper(arr, n, index + 1, target - arr[index], ans, count + 1);
    
}

void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    int ans[size];
    int count = 0;
    
    printSubsetSumToK_helper(input, size, 0, k, ans, count);
}

int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}
