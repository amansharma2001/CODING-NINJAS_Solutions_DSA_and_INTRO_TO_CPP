#include<iostream>
using namespace std;

bool checkNumber(int input[], int size, int x) {
  
    static int i=0;
    while(i<size){
        if(input[i]==x){
            return true;
        }
        else
        	return checkNumber(input+1,size-1,x);
        i++;
    }
    return false;

}

/*
int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}*/


