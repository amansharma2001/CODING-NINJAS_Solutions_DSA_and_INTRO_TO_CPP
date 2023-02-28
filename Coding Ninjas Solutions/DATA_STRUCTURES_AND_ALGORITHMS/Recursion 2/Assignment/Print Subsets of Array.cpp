#include <iostream>
using namespace std;


void print_Subs(int *input, int n, int *output, int count) {
 
	if(!n) {
        for(int i = 0; i < count; i++) {
            cout << output[i] << " ";  
        }
        cout << endl;
        return;
    }
    
    
    print_Subs(input + 1, n - 1, output,count);

    output[count] = input[0];
    print_Subs(input + 1, n - 1, output, count + 1);
    
}


void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    int output[1000];
    print_Subs(input, size, output, 0);
}

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}
