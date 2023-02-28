#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double geometricSum(int k) {
    double gp =  1/(pow(2,k)); 
    if(k==0){
        return 1;
    }
    else{
        return gp+geometricSum(k-1);
    }
    
}



/*
int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}*/
