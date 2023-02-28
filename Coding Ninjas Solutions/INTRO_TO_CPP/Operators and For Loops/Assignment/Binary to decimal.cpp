#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
    cin>>n;
    
    int r,bin=0;
    int i=0;
    while(n!=0){
        r=n%10;
        n=n/10;
        bin = bin + pow(2,i)*r;
        i++;
    }
    cout<<bin;
}