#include <iostream>
using namespace std;

#define mod 1000000007;
long balancedBTs(int n) {
    if(n==1 || n==0)
        return 1;
    
    long t1 = balancedBTs(n-1);
    long t2 = balancedBTs(n-2);
    
    return ( t1 * (2*t2 +t1) )%mod;
    
}


/*
int main() {
    int n;
    cin >> n;
    cout << balancedBTs(n);
}*/