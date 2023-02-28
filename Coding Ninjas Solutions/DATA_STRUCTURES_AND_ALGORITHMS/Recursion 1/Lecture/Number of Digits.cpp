#include<iostream>
#include "Solution.h"

int count(int n){
    static int c=0;
    if(n==0){
        return 1;
    }
    else{
        c++;
        count(n/10);
    }
    
    return c;
}


/*
int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}
*/

