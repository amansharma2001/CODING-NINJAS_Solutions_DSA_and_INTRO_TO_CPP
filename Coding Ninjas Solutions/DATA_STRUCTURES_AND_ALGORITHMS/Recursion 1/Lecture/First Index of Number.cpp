#include<iostream>
using namespace std;

int firstIndex(int input[], int size, int x) {
    static int i =0;
	if(size==0){
        return -1;
    }
    
    else{
    	if(input[0]==x){
            return i;
        }
        else{
            i++;
            return firstIndex(input, size-1, x);
        }
    }
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
    
    cout << firstIndex(input, n, x) << endl;

}*/


