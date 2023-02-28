#include <iostream>
using namespace std;

int multiplyNumbers(int m, int n) {
    if(m==0||n==0){
        return 0;
    }
    else{
        return multiplyNumbers(m,n-1)+m;
    }
}



/*
int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
*/