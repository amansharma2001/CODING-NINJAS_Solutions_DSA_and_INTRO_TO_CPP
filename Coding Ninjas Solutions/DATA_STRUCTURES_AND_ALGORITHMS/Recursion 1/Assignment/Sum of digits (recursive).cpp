#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    static int sum=0;
    int q=n/10;
    int r=n%10;
    
    if(q==0){
        sum=r;
        return sum;
    }
    else{
        return sum+r+sumOfDigits(q);
    }
}



/*
int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}*/
