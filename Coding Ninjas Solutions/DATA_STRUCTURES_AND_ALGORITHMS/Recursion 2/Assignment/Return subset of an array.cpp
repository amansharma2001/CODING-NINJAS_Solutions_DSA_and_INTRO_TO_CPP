#include <iostream>
using namespace std;

int subset(int input[], int n, int output[][20]) {
    
    if(n == 0) {
        return 1;
    }
    
   
    int small = subset(input + 1, n - 1, output);
    
    
    int curr = input[0];
    for(int i = 0 ; i < small ; i++) {
        output[small + i][0] =  1 + output[i][0];
        output[small + i][1] = curr;
        for(int j = 0; j < output[i][0]; j++) {
            output[small + i][j + 2] = output[i][j + 1];
        }
    }
    
    return 2 * small;
}


int main() {
  int input[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  
  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
