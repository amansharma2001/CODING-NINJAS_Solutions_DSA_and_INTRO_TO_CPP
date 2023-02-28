#include<iostream>
using namespace std;

int sum(int input[], int n) {
	static int sum1=0;
	
    int i=0;
    
    
    if(n==0){
        return sum1;
    }
    else{
        sum1+=input[i];
        i++;
        sum(input+1,n-1);
    }
    return sum1;

}
/*
int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    cout << sum(input, n) << endl;
}
*/

